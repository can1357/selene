#pragma once
#include <sdkgen/support_library.hpp>
#include "filetime_t.hpp"
#include "pss_process_flags_t.hpp"

#include "magic/pss_process_information_t.start.hpp"
namespace win
{
    // [struct PSS_PROCESS_INFORMATION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pss_process_information_t                                        
    {                                                                       
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                                                  
        _m000 uint32_t                      exit_status;                      //{ +0x0000    +0x0000    +0x0000    } | .ExitStatus
        _m001 void*                         peb_base_address;                 //{ +0x0008    +0x0008    +0x0008    } | .PebBaseAddress
        _m002 uint64_t                      affinity_mask;                    //{ +0x0010    +0x0010    +0x0010    } | .AffinityMask
        _m003 int32_t                       base_priority;                    //{ +0x0018    +0x0018    +0x0018    } | .BasePriority
        _m004 uint32_t                      process_id;                       //{ +0x001c    +0x001c    +0x001c    } | .ProcessId
        _m005 uint32_t                      parent_process_id;                //{ +0x0020    +0x0020    +0x0020    } | .ParentProcessId
        _m006 enum win::pss_process_flags_t flags;                            //{ +0x0024    +0x0024    +0x0024    } | .Flags
        _m007 struct win::filetime_t        create_time;                      //{ +0x0028    +0x0028    +0x0028    } | .CreateTime
        _m008 struct win::filetime_t        exit_time;                        //{ +0x0030    +0x0030    +0x0030    } | .ExitTime
        _m009 struct win::filetime_t        kernel_time;                      //{ +0x0038    +0x0038    +0x0038    } | .KernelTime
        _m010 struct win::filetime_t        user_time;                        //{ +0x0040    +0x0040    +0x0040    } | .UserTime
        _m011 uint32_t                      priority_class;                   //{ +0x0048    +0x0048    +0x0048    } | .PriorityClass
        _m012 uint64_t                      peak_virtual_size;                //{ +0x0050    +0x0050    +0x0050    } | .PeakVirtualSize
        _m013 uint64_t                      virtual_size;                     //{ +0x0058    +0x0058    +0x0058    } | .VirtualSize
        _m014 uint32_t                      page_fault_count;                 //{ +0x0060    +0x0060    +0x0060    } | .PageFaultCount
        _m015 uint64_t                      peak_working_set_size;            //{ +0x0068    +0x0068    +0x0068    } | .PeakWorkingSetSize
        _m016 uint64_t                      working_set_size;                 //{ +0x0070    +0x0070    +0x0070    } | .WorkingSetSize
        _m017 uint64_t                      quota_peak_paged_pool_usage;      //{ +0x0078    +0x0078    +0x0078    } | .QuotaPeakPagedPoolUsage
        _m018 uint64_t                      quota_paged_pool_usage;           //{ +0x0080    +0x0080    +0x0080    } | .QuotaPagedPoolUsage
        _m019 uint64_t                      quota_peak_non_paged_pool_usage;  //{ +0x0088    +0x0088    +0x0088    } | .QuotaPeakNonPagedPoolUsage
        _m020 uint64_t                      quota_non_paged_pool_usage;       //{ +0x0090    +0x0090    +0x0090    } | .QuotaNonPagedPoolUsage
        _m021 uint64_t                      pagefile_usage;                   //{ +0x0098    +0x0098    +0x0098    } | .PagefileUsage
        _m022 uint64_t                      peak_pagefile_usage;              //{ +0x00a0    +0x00a0    +0x00a0    } | .PeakPagefileUsage
        _m023 uint64_t                      private_usage;                    //{ +0x00a8    +0x00a8    +0x00a8    } | .PrivateUsage
        _m024 uint32_t                      execute_flags;                    //{ +0x00b0    +0x00b0    +0x00b0    } | .ExecuteFlags
        _m025 sdk::array<wchar_t, 260>      image_file_name;                  //{ +0x00b4    +0x00b4    +0x00b4    } | .ImageFileName
                                                                            
        SDK_MAGIC_PROPERTIES( "PSS_PROCESS_INFORMATION.$", 0x2c0, true, 0xdd61a6e01a1c4b81 );                                
        SDK_FIXED_SIZE( pss_process_information_t, 0x2c0 );                                
    };                                                                      
};
#include "magic/pss_process_information_t.end.hpp"
SDK_VERIFY( struct win::pss_process_information_t, 0x2c0 );
