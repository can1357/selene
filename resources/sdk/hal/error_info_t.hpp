#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/error_info_t.start.hpp"
namespace hal
{
    // [struct _HAL_ERROR_INFO]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct error_info_t                                          
    {                                                            
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                       
        _m000 uint32_t                version;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m001 uint32_t                init_max_size;               //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .InitMaxSize
        _m002 uint32_t                mca_max_size;                //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .McaMaxSize
        _m003 uint32_t                mca_previous_events_count;   //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .McaPreviousEventsCount
        _m004 uint32_t                mca_corrected_events_count;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .McaCorrectedEventsCount
        _m005 uint32_t                mca_kernel_delivery_fails;   //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .McaKernelDeliveryFails
        _m006 uint32_t                mca_driver_dpc_queue_fails;  //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .McaDriverDpcQueueFails
        _m007 uint32_t                mca_reserved;                //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .McaReserved
        _m008 uint32_t                cmc_max_size;                //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .CmcMaxSize
        _m009 uint32_t                cmc_polling_interval;        //{ +0x0024    +0x0024    +0x0024    +0x0024    +0x0024    } | .CmcPollingInterval
        _m010 uint32_t                cmc_interrupts_count;        //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .CmcInterruptsCount
        _m011 uint32_t                cmc_kernel_delivery_fails;   //{ +0x002c    +0x002c    +0x002c    +0x002c    +0x002c    } | .CmcKernelDeliveryFails
        _m012 uint32_t                cmc_driver_dpc_queue_fails;  //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .CmcDriverDpcQueueFails
        _m013 uint32_t                cmc_get_state_fails;         //{ +0x0034    +0x0034    +0x0034    +0x0034    +0x0034    } | .CmcGetStateFails
        _m014 uint32_t                cmc_clear_state_fails;       //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .CmcClearStateFails
        _m015 uint32_t                cmc_reserved;                //{ +0x003c    +0x003c    +0x003c    +0x003c    +0x003c    } | .CmcReserved
        _m016 uint64_t                cmc_log_id;                  //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .CmcLogId
        _m017 uint32_t                cpe_max_size;                //{ +0x0048    +0x0048    +0x0048    +0x0048    +0x0048    } | .CpeMaxSize
        _m018 uint32_t                cpe_polling_interval;        //{ +0x004c    +0x004c    +0x004c    +0x004c    +0x004c    } | .CpePollingInterval
        _m019 uint32_t                cpe_interrupts_count;        //{ +0x0050    +0x0050    +0x0050    +0x0050    +0x0050    } | .CpeInterruptsCount
        _m020 uint32_t                cpe_kernel_delivery_fails;   //{ +0x0054    +0x0054    +0x0054    +0x0054    +0x0054    } | .CpeKernelDeliveryFails
        _m021 uint32_t                cpe_driver_dpc_queue_fails;  //{ +0x0058    +0x0058    +0x0058    +0x0058    +0x0058    } | .CpeDriverDpcQueueFails
        _m022 uint32_t                cpe_get_state_fails;         //{ +0x005c    +0x005c    +0x005c    +0x005c    +0x005c    } | .CpeGetStateFails
        _m023 uint32_t                cpe_clear_state_fails;       //{ +0x0060    +0x0060    +0x0060    +0x0060    +0x0060    } | .CpeClearStateFails
        _m024 uint32_t                cpe_interrupt_sources;       //{ +0x0064    +0x0064    +0x0064    +0x0064    +0x0064    } | .CpeInterruptSources
        _m025 uint64_t                cpe_log_id;                  //{ +0x0068    +0x0068    +0x0068    +0x0068    +0x0068    } | .CpeLogId
        _m026 sdk::array<uint64_t, 4> kernel_reserved;             //{ +0x0070    +0x0070    +0x0070    +0x0070    +0x0070    } | .KernelReserved
                                                                 
        SDK_NONVOL_PROPERTIES( "_HAL_ERROR_INFO.$", 0x90, true, 0x9fb10b4ae5f87e12 );                           
        SDK_FIXED_SIZE( error_info_t, 0x90 );                           
    };                                                           
};
#include "magic/error_info_t.end.hpp"
SDK_VERIFY( struct hal::error_info_t, 0x90 );
