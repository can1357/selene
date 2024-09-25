#pragma once
#include <sdkgen/support_library.hpp>
#include "frame_type_record_t.hpp"

#include "magic/x_filter_t.start.hpp"
namespace ndis
{
    struct open_block_t;
    struct rw_lock_ex_t;
    struct miniport_block_t;

    // [struct _X_FILTER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct x_filter_t                                                         
    {                                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                                                    
        _m00 struct ndis::open_block_t*       open_list;                        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .OpenList
        _m01 struct ndis::open_block_t*       no_f_type_open_list;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NoFTypeOpenList
        _m02 struct ndis::open_block_t*       f_type_open_list;                 //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .FTypeOpenList
        _m03 struct ndis::frame_type_record_t frame_type_record;                //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .FrameTypeRecord
        _m04 struct ndis::rw_lock_ex_t*       bind_list_lock;                   //{ +0x0120    +0x0120    +0x0120    +0x0120    } | .BindListLock
        _m05 struct ndis::miniport_block_t*   miniport;                         //{ +0x0128    +0x0128    +0x0128    +0x0128    } | .Miniport
        _m06 uint32_t                         combined_packet_filter;           //{ +0x0130    +0x0130    +0x0130    +0x0130    } | .CombinedPacketFilter
        _m07 uint32_t                         old_combined_packet_filter;       //{ +0x0134    +0x0134    +0x0134    +0x0134    } | .OldCombinedPacketFilter
        _m08 uint32_t                         miniport_packet_filter;           //{ +0x0138    +0x0138    +0x0138    +0x0138    } | .MiniportPacketFilter
        _m09 uint32_t                         num_opens;                        //{ +0x013c    +0x013c    +0x013c    +0x013c    } | .NumOpens
        _m10 uint32_t                         num_no_e_type_opens;              //{ +0x0140    +0x0140    +0x0140    +0x0140    } | .NumNoETypeOpens
        _m11 struct ndis::open_block_t*       single_active_open;               //{ +0x0148    +0x0148    +0x0148    +0x0148    } | .SingleActiveOpen
        _m12 sdk::array<uint8_t, 6>           adapter_address;                  //{ +0x0150    +0x0150    +0x0150    +0x0150    } | .AdapterAddress
        _m13 uint32_t                         max_multicast_addresses;          //{ +0x0158    +0x0158    +0x0158    +0x0158    } | .MaxMulticastAddresses
        _m14 sdk::array<uint8_t, 6>*          next_m_cast_address_buf;          //{ +0x0160    +0x0160    +0x0160    +0x0160    } | .NextMCastAddressBuf
        _m15 sdk::array<uint8_t, 6>*          next_old_m_cast_address_buf;      //{ +0x0168    +0x0168    +0x0168    +0x0168    } | .NextOldMCastAddressBuf
        _m16 uint32_t                         next_num_addresses;               //{ +0x0170    +0x0170    +0x0170    +0x0170    } | .NextNumAddresses
        _m17 uint32_t                         next_old_num_addresses;           //{ +0x0174    +0x0174    +0x0174    +0x0174    } | .NextOldNumAddresses
        _m18 sdk::array<uint8_t, 6>*          miniport_m_cast_address_buf;      //{ +0x0178    +0x0178    +0x0178    +0x0178    } | .MiniportMCastAddressBuf
        _m19 uint32_t                         miniport_num_addresses;           //{ +0x0180    +0x0180    +0x0180    +0x0180    } | .MiniportNumAddresses
        _m20 sdk::array<uint8_t, 6>*          miniport_old_m_cast_address_buf;  //{ +0x0188    +0x0188    +0x0188    +0x0188    } | .MiniportOldMCastAddressBuf
        _m21 uint32_t                         miniport_old_num_addresses;       //{ +0x0190    +0x0190    +0x0190    +0x0190    } | .MiniportOldNumAddresses
                                                                              
        SDK_MAGIC_PROPERTIES( "_X_FILTER.$", 0x198, true, 0xad2b379a776826a9 );                                
        SDK_FIXED_SIZE( x_filter_t, 0x198 );                                  
    };                                                                        
};
#include "magic/x_filter_t.end.hpp"
SDK_VERIFY( struct ndis::x_filter_t, 0x198 );
