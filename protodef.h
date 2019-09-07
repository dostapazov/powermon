#ifndef PROTODEF_H
#define PROTODEF_H

#include <dev_proto.hpp>
#include <stdint.h>


#pragma pack(push,1)

constexpr uint8_t   PS_PC = 0xa5;  // pc -> cu
constexpr uint8_t   PS_CU = 0x5a;  // cu -> pc




constexpr uint8_t   PT_DATAREQ   = 0x0A;
constexpr uint8_t   PT_DATAREAD  = 0x0B;
constexpr uint8_t   PT_DATAWRITE = 0x0C;
constexpr uint8_t   PT_DIAG      = 0x0D;
constexpr uint8_t   PT_DEBUG     = 0x0F;
constexpr uint8_t   PT_CONREQ    = 0x10;
constexpr uint8_t   PT_CONCONF   = 0x11;


// Session type
constexpr uint8_t   ST_FINISH    = 0x00;
constexpr uint8_t   ST_CONTROL   = 0x01;
constexpr uint8_t   ST_READONLY  = 0x02;

struct session_t
{
    uint8_t  mode;
    uint8_t  error;
    uint16_t ssID;
    session_t(uint16_t id, uint8_t a_mode = ST_FINISH,  uint8_t a_error = 0):mode (a_mode),error(a_error), ssID(id) {}
};


typedef struct {uint8_t sync_byte =  PS_PC;} pc_prolog_t;
typedef struct {uint8_t sync_byte =  PS_CU;} cu_prolog_t;


struct proto_header
{
  uint16_t session_id;
  uint16_t packet_number;
  uint16_t channel;
  uint8_t  type;

};

#pragma pack(pop)

typedef devproto::t_hdr<pc_prolog_t,proto_header, uint16_t> send_header_t, *lpsend_header_t;
typedef devproto::t_hdr<cu_prolog_t,proto_header, uint16_t> recv_header_t, *lprecv_header_t;

typedef devproto::proto_buffer<send_header_t,uint32_t>      send_buffer_t;
typedef devproto::proto_buffer<recv_header_t,uint32_t>      recv_buffer_t;


#endif // PROTODEF_H

