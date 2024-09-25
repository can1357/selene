#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_process_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_PROCESS_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_process_information_t                         
    {                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
        //                                                      
        _m000 uint32_t         next_entry_offset;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NextEntryOffset
        _m001 uint32_t         number_of_threads;                 //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .NumberOfThreads
        _m002 int64_t          working_set_private_size;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .WorkingSetPrivateSize
        _m003 uint32_t         hard_fault_count;                  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .HardFaultCount
        _m004 uint32_t         number_of_threads_high_watermark;  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .NumberOfThreadsHighWatermark
        _m005 uint64_t         cycle_time;                        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .CycleTime
        _m006 int64_t          create_time;                       //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .CreateTime
        _m007 int64_t          user_time;                         //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .UserTime
        _m008 int64_t          kernel_time;                       //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .KernelTime
        _m009 nt::unicode_view image_name;                        //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .ImageName
        _m010 int32_t          base_priority;                     //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .BasePriority
        _m011 void*            unique_process_id;                 //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .UniqueProcessId
        _m012 void*            inherited_from_unique_process_id;  //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .InheritedFromUniqueProcessId
        _m013 uint32_t         handle_count;                      //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .HandleCount
        _m014 uint32_t         session_id;                        //{ +0x0064    +0x0064    +0x0064    +0x0064    } | .SessionId
        _m015 uint64_t         unique_process_key;                //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .UniqueProcessKey
        _m016 uint64_t         peak_virtual_size;                 //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .PeakVirtualSize
        _m017 uint64_t         virtual_size;                      //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .VirtualSize
        _m018 uint32_t         page_fault_count;                  //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .PageFaultCount
        _m019 uint64_t         peak_working_set_size;             //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .PeakWorkingSetSize
        _m020 uint64_t         working_set_size;                  //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .WorkingSetSize
        _m021 uint64_t         quota_peak_paged_pool_usage;       //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .QuotaPeakPagedPoolUsage
        _m022 uint64_t         quota_paged_pool_usage;            //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .QuotaPagedPoolUsage
        _m023 uint64_t         quota_peak_non_paged_pool_usage;   //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .QuotaPeakNonPagedPoolUsage
        _m024 uint64_t         quota_non_paged_pool_usage;        //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .QuotaNonPagedPoolUsage
        _m025 uint64_t         pagefile_usage;                    //{ +0x00b8    +0x00b8    +0x00b8    +0x00b8    } | .PagefileUsage
        _m026 uint64_t         peak_pagefile_usage;               //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .PeakPagefileUsage
        _m027 uint64_t         private_page_count;                //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .PrivatePageCount
        _m028 int64_t          read_operation_count;              //{ +0x00d0    +0x00d0    +0x00d0    +0x00d0    } | .ReadOperationCount
        _m029 int64_t          write_operation_count;             //{ +0x00d8    +0x00d8    +0x00d8    +0x00d8    } | .WriteOperationCount
        _m030 int64_t          other_operation_count;             //{ +0x00e0    +0x00e0    +0x00e0    +0x00e0    } | .OtherOperationCount
        _m031 int64_t          read_transfer_count;               //{ +0x00e8    +0x00e8    +0x00e8    +0x00e8    } | .ReadTransferCount
        _m032 int64_t          write_transfer_count;              //{ +0x00f0    +0x00f0    +0x00f0    +0x00f0    } | .WriteTransferCount
        _m033 int64_t          other_transfer_count;              //{ +0x00f8    +0x00f8    +0x00f8    +0x00f8    } | .OtherTransferCount
                                                                
        SDK_MAGIC_PROPERTIES( "_SYSTEM_PROCESS_INFORMATION.$", 0x100, true, 0xf9fca49492c1c506 );                                 
        SDK_FIXED_SIZE( system_process_information_t, 0x100 );                                 
    };                                                          
};
#include "magic/system_process_information_t.end.hpp"
SDK_VERIFY( struct win::system_process_information_t, 0x100 );
