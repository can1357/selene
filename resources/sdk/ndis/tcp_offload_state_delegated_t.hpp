#pragma once
#include <sdkgen/support_library.hpp>
#include "offload_state_header_t.hpp"
#include "tcp_offload_connection_state_t.hpp"

#include "magic/tcp_offload_state_delegated_t.start.hpp"
namespace ndis
{
    struct net_buffer_list_t;

    // [struct _TCP_OFFLOAD_STATE_DELEGATED]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct tcp_offload_state_delegated_t                                     
    {                                                                        
        struct u0_keep_alive_t                                               
        {                                                                    
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                   
            //                                                               
            _m21 uint8_t  probe_count;                                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ProbeCount
            _m22 uint32_t timeout_delta;                                       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .TimeoutDelta
                                                                             
            SDK_MAGIC_PROPERTIES( "_TCP_OFFLOAD_STATE_DELEGATED.KeepAlive.$", 0x8, true, 0x326dc61ce0b4b91d );                                   
            SDK_FIXED_SIZE( u0_keep_alive_t, 0x8 );                                   
        };                                                                   
                                                                             
        struct u4_retransmit_t                                               
        {                                                                    
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                   
            //                                                               
            _m24 uint8_t  count;                                               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Count
            _m25 uint32_t timeout_delta;                                       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .TimeoutDelta
                                                                             
            SDK_MAGIC_PROPERTIES( "_TCP_OFFLOAD_STATE_DELEGATED.Retransmit.$", 0x8, true, 0xa035d6c0d090e8a7 );                                   
            SDK_FIXED_SIZE( u4_retransmit_t, 0x8 );                                   
        };                                                                   
                                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                                   
        _m000 struct ndis::offload_state_header_t       header;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m001 enum ndis::tcp_offload_connection_state_t state;                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .State
        _m002 uint16_t                                  flags;                 //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Flags
        _m003 uint32_t                                  rcv_nxt;               //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .RcvNxt
        _m004 uint32_t                                  rcv_wnd;               //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .RcvWnd
        _m005 uint32_t                                  snd_una;               //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .SndUna
        _m006 uint32_t                                  snd_nxt;               //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .SndNxt
        _m007 uint32_t                                  snd_max;               //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .SndMax
        _m008 uint32_t                                  snd_wnd;               //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .SndWnd
        _m009 uint32_t                                  max_snd_wnd;           //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .MaxSndWnd
        _m010 uint32_t                                  send_wl1;              //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .SendWL1
        _m011 uint32_t                                  c_wnd;                 //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .CWnd
        _m012 uint32_t                                  ss_thresh;             //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .SsThresh
        _m013 uint16_t                                  s_rtt;                 //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .SRtt
        _m014 uint16_t                                  rtt_var;               //{ +0x003a    +0x003a    +0x003a    +0x003a    } | .RttVar
        _m015 uint32_t                                  ts_recent;             //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .TsRecent
        _m016 uint32_t                                  ts_recent_age;         //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .TsRecentAge
        _m017 uint32_t                                  ts_time;               //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .TsTime
        _m018 uint32_t                                  total_rt;              //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .TotalRT
        _m019 uint8_t                                   dup_ack_count;         //{ +0x004c    +0x004c    +0x004c    +0x004c    } | .DupAckCount
        _m020 uint8_t                                   snd_wnd_probe_count;   //{ +0x004d    +0x004d    +0x004d    +0x004d    } | .SndWndProbeCount
        _m023 u0_keep_alive_t                           keep_alive;            //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .KeepAlive
        _m026 u4_retransmit_t                           retransmit;            //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .Retransmit
        _m027 struct ndis::net_buffer_list_t*           send_data_head;        //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .SendDataHead
        _m028 struct ndis::net_buffer_list_t*           send_data_tail;        //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .SendDataTail
        _m029 uint32_t                                  send_backlog_size;     //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .SendBacklogSize
        _m030 struct ndis::net_buffer_list_t*           buffered_data;         //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .BufferedData
        _m031 uint32_t                                  receive_backlog_size;  //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .ReceiveBacklogSize
        _m032 uint32_t                                  d_wnd;                 //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .DWnd
                                                                             
        SDK_MAGIC_PROPERTIES( "_TCP_OFFLOAD_STATE_DELEGATED.$", 0x80, true, 0xd1925ad010fb709 );                     
        SDK_FIXED_SIZE( tcp_offload_state_delegated_t, 0x80 );                     
    };                                                                       
};
#include "magic/tcp_offload_state_delegated_t.end.hpp"
SDK_VERIFY( struct ndis::tcp_offload_state_delegated_t::u0_keep_alive_t, 0x8 );
SDK_VERIFY( struct ndis::tcp_offload_state_delegated_t::u4_retransmit_t, 0x8 );
SDK_VERIFY( struct ndis::tcp_offload_state_delegated_t, 0x80 );
