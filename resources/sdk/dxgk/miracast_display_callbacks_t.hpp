#pragma once
#include <sdkgen/support_library.hpp>

namespace io { struct status_block_t; }

#include "magic/miracast_display_callbacks_t.start.hpp"
namespace dxgk
{
    struct miracast_chunk_info_t;

    // [struct _DXGK_MIRACAST_DISPLAY_CALLBACKS]
    // => WDK 10 (NV)
    //
    struct miracast_display_callbacks_t                                         
    {                                                                           
        using dxgkcb_miracast_send_message_t =      sdk::function<int32_t(void*, uint32_t, void*, uint32_t, void*, sdk::function<void(void*, struct io::status_block_t*)>*, void*)>*;                              
        using dxgkcb_miracast_report_chunk_info_t = sdk::function<int32_t(void*, struct dxgk::miracast_chunk_info_t*, void*, uint32_t)>*;                              
                                                                                
        // WDK 10                                                               
        //                                                                      
        _m00 void*                                miracast_handle;                //{ +0x0000    } | .MiracastHandle
        _m01 dxgkcb_miracast_send_message_t       dxgk_cb_miracast_send_message;  //{ +0x0008    } | .DxgkCbMiracastSendMessage
        _m02 dxgkcb_miracast_report_chunk_info_t  dxgk_cb_report_chunk_info;      //{ +0x0010    } | .DxgkCbReportChunkInfo
                                                                                
        SDK_NONVOL_PROPERTIES( "_DXGK_MIRACAST_DISPLAY_CALLBACKS.$", 0x0, false, 0x7d0534559392ff96 );                              
        SDK_FIXED_SIZE( miracast_display_callbacks_t, 0x18 );                              
    };                                                                          
};
#include "magic/miracast_display_callbacks_t.end.hpp"
SDK_VERIFY( struct dxgk::miracast_display_callbacks_t, 0x18 );
