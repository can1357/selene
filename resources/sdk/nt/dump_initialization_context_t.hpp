#pragma once
#include <sdkgen/support_library.hpp>
#include "guid_t.hpp"
#include "dump_events_t.hpp"

#include "magic/dump_initialization_context_t.start.hpp"
namespace nt
{
    struct mdl_t;
    struct adapter_object_t;

    // [struct _DUMP_INITIALIZATION_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dump_initialization_context_t                                             
    {                                                                                
        union u0_disk_info_t                                                         
        {                                                                            
            struct u4_mbr_t                                                          
            {                                                                        
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                          
                //                                                                   
                _m19 uint32_t signature;                                               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Signature
                _m20 uint32_t check_sum;                                               //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .CheckSum
                                                                                     
                SDK_MAGIC_PROPERTIES( "_DUMP_INITIALIZATION_CONTEXT.DiskInfo.Mbr.$", 0x8, true, 0x9bbe1b27746f2d9c );                                          
                SDK_FIXED_SIZE( u4_mbr_t, 0x8 );                                          
            };                                                                       
                                                                                     
            struct u8_gpt_t                                                          
            {                                                                        
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                        
                //                                                                   
                _m22 struct nt::guid_t disk_id;                                        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DiskId
                                                                                     
                SDK_MAGIC_PROPERTIES( "_DUMP_INITIALIZATION_CONTEXT.DiskInfo.Gpt.$", 0x10, true, 0x84f62ffd1840d772 );                                        
                SDK_FIXED_SIZE( u8_gpt_t, 0x10 );                                        
            };                                                                       
                                                                                     
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                
            //                                                                       
            _m21 u4_mbr_t                      mbr;                                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Mbr
            _m23 u8_gpt_t                      gpt;                                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Gpt
                                                                                     
            SDK_MAGIC_PROPERTIES( "_DUMP_INITIALIZATION_CONTEXT.DiskInfo.$", 0x10, true, 0x7f896cedd743d28a );                                
            SDK_FIXED_SIZE( u0_disk_info_t, 0x10 );                                  
        };                                                                           
                                                                                     
        using write_routine_t =               sdk::function<int32_t(int64_t*, struct nt::mdl_t*)>*;                            
        using write_pending_routine_t =       sdk::function<int32_t(int32_t, int64_t*, struct nt::mdl_t*, void*)>*;                            
        using read_routine_t =                sdk::function<int32_t(int32_t, int64_t*, struct nt::mdl_t*)>*;                            
        using get_drive_telemetry_routine_t = sdk::function<int32_t(uint32_t, uint32_t, void*, uint32_t)>*;                            
        using dump_notify_routine_t =         sdk::function<void(enum nt::dump_events_t, void*, uint32_t)>*;                            
                                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                                           
        _m000 uint32_t                                   length;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
        _m001 void*                                      memory_block;                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .MemoryBlock
        _m002 sdk::array<void*, 2>                       common_buffer;                //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .CommonBuffer
        _m003 sdk::array<int64_t, 2>                     physical_address;             //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .PhysicalAddress
        _m004 sdk::function<void(uint32_t)>*             stall_routine;                //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .StallRoutine
        _m005 sdk::function<uint8_t(int64_t)>*           open_routine;                 //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .OpenRoutine
        _m006 write_routine_t                            write_routine;                //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .WriteRoutine
        _m007 sdk::function<void()>*                     finish_routine;               //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .FinishRoutine
        _m008 struct nt::adapter_object_t*               adapter_object;               //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .AdapterObject
        _m009 void*                                      mapped_register_base;         //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .MappedRegisterBase
        _m010 void*                                      port_configuration;           //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .PortConfiguration
        _m011 uint8_t                                    crash_dump;                   //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .CrashDump
        _m012 uint8_t                                    mark_memory_only;             //{ +0x0069    +0x0069    +0x0069    +0x0069    } | .MarkMemoryOnly
        _m013 uint8_t                                    hiber_resume;                 //{ +0x006a    +0x006a    +0x006a    +0x006a    } | .HiberResume
        _m014 uint32_t                                   maximum_transfer_size;        //{ +0x006c    +0x006c    +0x006c    +0x006c    } | .MaximumTransferSize
        _m015 uint32_t                                   common_buffer_size;           //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .CommonBufferSize
        _m016 void*                                      target_address;               //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .TargetAddress
        _m017 write_pending_routine_t                    write_pending_routine;        //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .WritePendingRoutine
        _m018 uint32_t                                   partition_style;              //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .PartitionStyle
        _m024 u0_disk_info_t                             disk_info;                    //{ +0x008c    +0x008c    +0x008c    +0x008c    } | .DiskInfo
        _m025 read_routine_t                             read_routine;                 //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .ReadRoutine
        _m026 get_drive_telemetry_routine_t              get_drive_telemetry_routine;  //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .GetDriveTelemetryRoutine
        _m027 uint32_t                                   log_section_truncate_size;    //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .LogSectionTruncateSize
        _m028 sdk::array<uint32_t, 16>                   parameters;                   //{ +0x00b4    +0x00b4    +0x00b4    +0x00b4    } | .Parameters
        _m029 sdk::function<void(uint32_t*, uint32_t*)>* get_transfer_sizes_routine;   //{ +0x00f8    +0x00f8    +0x00f8    +0x00f8    } | .GetTransferSizesRoutine
        _m030 dump_notify_routine_t                      dump_notify_routine;          //{ +0x0100    +0x0100    +0x0100    +0x0100    } | .DumpNotifyRoutine
                                                                                     
        SDK_MAGIC_PROPERTIES( "_DUMP_INITIALIZATION_CONTEXT.$", 0x108, true, 0x25041d337c048245 );                            
        SDK_FIXED_SIZE( dump_initialization_context_t, 0x108 );                            
    };                                                                               
};
#include "magic/dump_initialization_context_t.end.hpp"
SDK_VERIFY( struct nt::dump_initialization_context_t::u0_disk_info_t::u4_mbr_t, 0x8 );
SDK_VERIFY( struct nt::dump_initialization_context_t::u0_disk_info_t::u8_gpt_t, 0x10 );
SDK_VERIFY( union nt::dump_initialization_context_t::u0_disk_info_t, 0x10 );
SDK_VERIFY( struct nt::dump_initialization_context_t, 0x108 );
