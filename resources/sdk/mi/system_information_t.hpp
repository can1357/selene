#pragma once
#include <sdkgen/support_library.hpp>
#include "pool_state_t.hpp"
#include "error_state_t.hpp"
#include "combine_state_t.hpp"
#include "enclave_state_t.hpp"
#include "io_page_state_t.hpp"
#include "process_state_t.hpp"
#include "section_state_t.hpp"
#include "session_state_t.hpp"
#include "standby_state_t.hpp"
#include "visible_state_t.hpp"
#include "debugger_state_t.hpp"
#include "hardware_state_t.hpp"
#include "pagelist_state_t.hpp"
#include "shutdown_state_t.hpp"
#include "hot_patch_state_t.hpp"
#include "paging_io_state_t.hpp"
#include "partition_state_t.hpp"
#include "system_va_state_t.hpp"
#include "access_log_state_t.hpp"
#include "system_pte_state_t.hpp"
#include "common_page_state_t.hpp"
#include "system_trim_state_t.hpp"
#include "system_image_state_t.hpp"
#include "system_accelerators_t.hpp"

namespace tlg { struct provider_t; }

#include "magic/system_information_t.start.hpp"
namespace mi
{
    // [struct _MI_SYSTEM_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_information_t                                   
    {                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                        
        _m000 struct mi::pool_state_t          pools;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Pools
        _m001 struct mi::section_state_t       sections;            //{ +0x0100    +0x00c0    +0x00c0    +0x00c0    } | .Sections
        _m002 struct mi::system_image_state_t  system_images;       //{ +0x0380    +0x0400    +0x0440    +0x0400    } | .SystemImages
        _m003 struct mi::session_state_t       sessions;            //{ +0x0440    +0x04a8    +0x0550    +0x04a8    } | .Sessions
        _m004 struct mi::process_state_t       processes;           //{ +0x04e0    +0x1550    +0x0580    +0x1550    } | .Processes
        _m005 struct mi::hardware_state_t      hardware;            //{ +0x0540    +0x15c0    +0x0600    +0x15c0    } | .Hardware
        _m006 struct mi::system_va_state_t     system_va;           //{ +0x0680    +0x1780    +0x1780    +0x1780    } | .SystemVa
        _m007 struct mi::combine_state_t       page_combines;       //{ +0x09c0    +0x1c40    +0x1c80    +0x1c40    } | .PageCombines
        _m008 struct mi::pagelist_state_t      page_lists;          //{ +0x0b60    +0x1c60    +0x1ca0    +0x1c60    } | .PageLists
        _m009 struct mi::partition_state_t     partitions;          //{ +0x0b70    +0x1d00    +0x1dc0    +0x1d00    } | .Partitions
        _m010 struct mi::shutdown_state_t      shutdowns;           //{ +0x0bd0    +0x1dc0    +0x2880    +0x1dc0    } | .Shutdowns
        _m011 struct mi::error_state_t         errors;              //{ +0x0c50    +0x1e38    +0x28f8    +0x1e38    } | .Errors
        _m012 struct mi::access_log_state_t    access_log;          //{ +0x0d40    +0x1f00    +0x2a00    +0x1f00    } | .AccessLog
        _m013 struct mi::debugger_state_t      debugger;            //{ +0x0dc0    +0x1f80    +0x2a80    +0x1f80    } | .Debugger
        _m014 struct mi::standby_state_t       standby;             //{ +0x0f00    +0x20a0    +0x2ba0    +0x20a0    } | .Standby
        _m015 struct mi::system_pte_state_t    system_ptes;         //{ +0x0fc0    +0x2140    +0x2d40    +0x2140    } | .SystemPtes
        _m016 struct mi::io_page_state_t       io_pages;            //{ +0x1180    +0x2340    +0x3fc0    +0x2340    } | .IoPages
        _m017 struct mi::paging_io_state_t     paging_io;           //{ +0x11f0    +0x23b0    +0x4080    +0x23b0    } | .PagingIo
        _m018 struct mi::common_page_state_t   common_pages;        //{ +0x1240    +0x2460    +0x4130    +0x2460    } | .CommonPages
        _m019 struct mi::system_trim_state_t   trims;               //{ +0x1300    +0x2540    +0x4200    +0x2540    } | .Trims
        _m020 uint64_t                         cookie;              //{ +0x1340    +0x25c8    +0x4310    +0x25c8    } | .Cookie
        _m021 void volatile**                  boot_registry_runs;  //{ +0x1350    +0x25d0    +0x4318    +0x25d0    } | .BootRegistryRuns
        _m022 volatile int32_t                 zeroing_disabled;    //{ +0x1348    +0x25d8    +0x4320    +0x25d8    } | .ZeroingDisabled
        _m023 uint8_t                          fully_initialized;   //{ +0x1358    +0x25dc    +0x4324    +0x25dc    } | .FullyInitialized
        _m024 uint8_t                          safe_booted;         //{ +0x1359    +0x25dd    +0x4325    +0x25dd    } | .SafeBooted
        _m025 const struct tlg::provider_t*    trace_logging;       //{ +0x1360    +0x25e0    +0x4328    +0x25e0    } | .TraceLogging
        _m026 struct mi::visible_state_t       vs;                  //{ +0x1380    +0x2600    +0x4340    +0x2600    } | .Vs
                                                                  
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                        
        _m027 struct mi::enclave_state_t       enclaves;            //{ +0x2580    +0x42c8    +0x2580    } | .Enclaves
                                                                  
        // Windows 11                                             
        //                                                        
        _m028 struct mi::system_accelerators_t accelerators;        //{ +0x4240    } | .Accelerators
        _m029 struct mi::hot_patch_state_t     hot_patch;           //{ +0x4268    } | .HotPatch
                                                                  
        SDK_MAGIC_PROPERTIES( "_MI_SYSTEM_INFORMATION.$", 0x32c0, true, 0xe8ddf04f67e234c4 );                   
        SDK_DYNAMIC_SIZE( system_information_t );                   
    };                                                            
};
#include "magic/system_information_t.end.hpp"
