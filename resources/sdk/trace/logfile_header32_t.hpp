#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "../win/time_zone_information_t.hpp"

#include "magic/logfile_header32_t.start.hpp"
namespace trace
{
    // [struct _TRACE_LOGFILE_HEADER32]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct logfile_header32_t                                         
    {                                                                 
        struct u0_version_detail_t                                    
        {                                                             
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                       
            //                                                        
            _m02 uint8_t major_version;                                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .MajorVersion
            _m03 uint8_t minor_version;                                 //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .MinorVersion
            _m04 uint8_t sub_version;                                   //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .SubVersion
            _m05 uint8_t sub_minor_version;                             //{ +0x0003    +0x0003    +0x0003    +0x0003    } | .SubMinorVersion
                                                                      
            SDK_MAGIC_PROPERTIES( "_TRACE_LOGFILE_HEADER32.VersionDetail.$", 0x4, true, 0x651f44c488dc6e11 );                                       
            SDK_FIXED_SIZE( u0_version_detail_t, 0x4 );                                       
        };                                                            
                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                            
        _m00 uint32_t                            buffer_size;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .BufferSize
        _m01 uint32_t                            version;               //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Version
        _m06 u0_version_detail_t                 version_detail;        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .VersionDetail
        _m07 uint32_t                            provider_version;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ProviderVersion
        _m08 uint32_t                            number_of_processors;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .NumberOfProcessors
        _m09 int64_t                             end_time;              //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .EndTime
        _m10 uint32_t                            timer_resolution;      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .TimerResolution
        _m11 uint32_t                            maximum_file_size;     //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .MaximumFileSize
        _m12 uint32_t                            log_file_mode;         //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .LogFileMode
        _m13 uint32_t                            buffers_written;       //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .BuffersWritten
        _m14 struct nt::guid_t                   log_instance_guid;     //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .LogInstanceGuid
        _m15 uint32_t                            start_buffers;         //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .StartBuffers
        _m16 uint32_t                            pointer_size;          //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .PointerSize
        _m17 uint32_t                            events_lost;           //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .EventsLost
        _m18 uint32_t                            cpu_speed_in_m_hz;     //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .CpuSpeedInMHz
        _m19 uint32_t                            logger_name;           //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .LoggerName
        _m20 uint32_t                            log_file_name;         //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .LogFileName
        _m21 struct win::time_zone_information_t time_zone;             //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .TimeZone
        _m22 int64_t                             boot_time;             //{ +0x00f0    +0x00f0    +0x00f0    +0x00f0    } | .BootTime
        _m23 int64_t                             perf_freq;             //{ +0x00f8    +0x00f8    +0x00f8    +0x00f8    } | .PerfFreq
        _m24 int64_t                             start_time;            //{ +0x0100    +0x0100    +0x0100    +0x0100    } | .StartTime
        _m25 uint32_t                            buffers_lost;          //{ +0x010c    +0x010c    +0x010c    +0x010c    } | .BuffersLost
                                                                      
        SDK_MAGIC_PROPERTIES( "_TRACE_LOGFILE_HEADER32.$", 0x110, true, 0xf5a90a2f44ec59e4 );                     
        SDK_FIXED_SIZE( logfile_header32_t, 0x110 );                     
    };                                                                
};
#include "magic/logfile_header32_t.end.hpp"
SDK_VERIFY( struct trace::logfile_header32_t::u0_version_detail_t, 0x4 );
SDK_VERIFY( struct trace::logfile_header32_t, 0x110 );
