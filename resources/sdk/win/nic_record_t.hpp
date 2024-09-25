#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nic_record_t.start.hpp"
namespace win
{
    // [struct _NIC_RECORD]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct nic_record_t                                     
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                  
        _m00 sdk::array<wchar_t, 256> nic_name;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NICName
        _m01 uint32_t                 index;                  //{ +0x0200    +0x0200    +0x0200    +0x0200    } | .Index
        _m02 uint32_t                 physical_addr_len;      //{ +0x0204    +0x0204    +0x0204    +0x0204    } | .PhysicalAddrLen
        _m03 sdk::array<wchar_t, 8>   physical_addr;          //{ +0x0208    +0x0208    +0x0208    +0x0208    } | .PhysicalAddr
        _m04 uint32_t                 size;                   //{ +0x0218    +0x0218    +0x0218    +0x0218    } | .Size
        _m05 int32_t                  ip_address;             //{ +0x021c    +0x021c    +0x021c    +0x021c    } | .IpAddress
        _m06 int32_t                  subnet_mask;            //{ +0x0220    +0x0220    +0x0220    +0x0220    } | .SubnetMask
        _m07 int32_t                  dhcp_server;            //{ +0x0224    +0x0224    +0x0224    +0x0224    } | .DhcpServer
        _m08 int32_t                  gateway;                //{ +0x0228    +0x0228    +0x0228    +0x0228    } | .Gateway
        _m09 int32_t                  primary_wins_server;    //{ +0x022c    +0x022c    +0x022c    +0x022c    } | .PrimaryWinsServer
        _m10 int32_t                  secondary_wins_server;  //{ +0x0230    +0x0230    +0x0230    +0x0230    } | .SecondaryWinsServer
        _m11 sdk::array<int32_t, 4>   dns_server;             //{ +0x0234    +0x0234    +0x0234    +0x0234    } | .DnsServer
        _m12 uint32_t                 data;                   //{ +0x0244    +0x0244    +0x0244    +0x0244    } | .Data
                                                            
        SDK_MAGIC_PROPERTIES( "_NIC_RECORD.$", 0x248, true, 0xd37ac80f33860247 );                      
        SDK_FIXED_SIZE( nic_record_t, 0x248 );                      
    };                                                      
};
#include "magic/nic_record_t.end.hpp"
SDK_VERIFY( struct win::nic_record_t, 0x248 );
