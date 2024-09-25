#pragma once
#include <sdkgen/support_library.hpp>
#include "../stor/port/wnode_header_t.hpp"

#include "magic/logger_information_t.start.hpp"
namespace wmi
{
    // [struct _WMI_LOGGER_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct logger_information_t                                          
    {                                                                    
        union u0_dummyunionname10_t                                      
        {                                                                
            // Windows 10 v1607                                            
            //                                                           
            _m38 void*    logger_extension;                                //{ +0x0000    } | .LoggerExtension
            _m39 uint64_t logger_extension64;                              //{ +0x0000    } | .LoggerExtension64
                                                                         
            SDK_MAGIC_PROPERTIES( "_WMI_LOGGER_INFORMATION.DUMMYUNIONNAME10.$", 0x0, false, 0xe061fff4e39884ba );                                            
            SDK_FIXED_SIZE( u0_dummyunionname10_t, 0x8 );                                            
        };                                                               
                                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                               
        _m000 struct stor::port::wnode_header_t wnode;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Wnode
        _m001 uint32_t                          buffer_size;               //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .BufferSize
        _m002 uint32_t                          minimum_buffers;           //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .MinimumBuffers
        _m003 uint32_t                          maximum_buffers;           //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .MaximumBuffers
        _m004 uint32_t                          maximum_file_size;         //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .MaximumFileSize
        _m005 uint32_t                          log_file_mode;             //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .LogFileMode
        _m006 uint32_t                          flush_timer;               //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .FlushTimer
        _m007 uint32_t                          enable_flags;              //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .EnableFlags
        _m008 int32_t                           age_limit;                 //{ +0x004c    +0x004c    +0x004c    +0x004c    } | .AgeLimit
        _m009 int32_t                           flush_threshold;           //{ +0x004c    +0x004c    +0x004c    +0x004c    } | .FlushThreshold
        _m010 varuint_t                         wow;                       //{ +0x0050    +0x0050@0  +0x0050@0  +0x0050@0  } | .Wow
        _m011 void*                             log_file_handle;           //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .LogFileHandle
        _m012 uint64_t                          log_file_handle64;         //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .LogFileHandle64
        _m013 uint32_t                          number_of_buffers;         //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .NumberOfBuffers
        _m014 uint32_t                          instance_count;            //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .InstanceCount
        _m015 uint32_t                          free_buffers;              //{ +0x0064    +0x0064    +0x0064    +0x0064    } | .FreeBuffers
        _m016 uint32_t                          instance_id;               //{ +0x0064    +0x0064    +0x0064    +0x0064    } | .InstanceId
        _m017 uint32_t                          events_lost;               //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .EventsLost
        _m018 uint32_t                          number_of_processors;      //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .NumberOfProcessors
        _m019 uint32_t                          buffers_written;           //{ +0x006c    +0x006c    +0x006c    +0x006c    } | .BuffersWritten
        _m020 uint32_t                          log_buffers_lost;          //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .LogBuffersLost
        _m021 uint32_t                          flags;                     //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .Flags
        _m022 uint32_t                          real_time_buffers_lost;    //{ +0x0074    +0x0074    +0x0074    +0x0074    } | .RealTimeBuffersLost
        _m023 void*                             logger_thread_id;          //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .LoggerThreadId
        _m024 uint64_t                          logger_thread_id64;        //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .LoggerThreadId64
        _m025 nt::unicode_view                  log_file_name;             //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .LogFileName
        _m026 nt::ascii_view                    log_file_name64;           //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .LogFileName64
        _m027 nt::unicode_view                  logger_name;               //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .LoggerName
        _m028 nt::ascii_view                    logger_name64;             //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .LoggerName64
        _m029 uint32_t                          real_time_consumer_count;  //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .RealTimeConsumerCount
                                                                         
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                               
        _m030 uint1_t                           qpc_delta_tracking;        //{ +0x0050@1  +0x0050@1  +0x0050@1  } | .QpcDeltaTracking
        _m031 uint1_t                           large_mdl_pages;           //{ +0x0050@2  +0x0050@2  +0x0050@2  } | .LargeMdlPages
        _m032 uint1_t                           exclude_kernel_stack;      //{ +0x0050@3  +0x0050@3  +0x0050@3  } | .ExcludeKernelStack
        _m033 uint64_t                          v2_options;                //{ +0x0050    +0x0050    +0x0050    } | .V2Options
        _m034 uint32_t                          sequence_number;           //{ +0x00a4    +0x00a4    +0x00a4    } | .SequenceNumber
        _m035 void*                             logger_extension;          //{ +0x00a8    +0x00a8    +0x00a8    } | .LoggerExtension
        _m036 uint64_t                          logger_extension64;        //{ +0x00a8    +0x00a8    +0x00a8    } | .LoggerExtension64
                                                                         
        // Windows 10 v1607                                              
        //                                                               
        _m037 uint32_t                          spare_ulong;               //{ +0x00a4    } | .SpareUlong
        _m040 u0_dummyunionname10_t             dummyunionname10;          //{ +0x00a8    } | .DUMMYUNIONNAME10
                                                                         
        SDK_MAGIC_PROPERTIES( "_WMI_LOGGER_INFORMATION.$", 0xb0, true, 0x27e631238b71515f );                         
        SDK_FIXED_SIZE( logger_information_t, 0xb0 );                         
    };                                                                   
};
#include "magic/logger_information_t.end.hpp"
SDK_VERIFY( union wmi::logger_information_t::u0_dummyunionname10_t, 0x8 );
SDK_VERIFY( struct wmi::logger_information_t, 0xb0 );
