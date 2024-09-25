#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/curdir_t.hpp"
#include "drive_letter_curdir_t.hpp"

#include "magic/user_process_parameters_t.start.hpp"
namespace rtl
{
    // [struct _RTL_USER_PROCESS_PARAMETERS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct user_process_parameters_t                                                  
    {                                                                                 
        using current_directores_t =  sdk::array<struct rtl::drive_letter_curdir_t, 32>;                                      
        using current_directories_t = sdk::array<struct rtl::drive_letter_curdir_t, 32>;                                      
                                                                                      
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                      
        //                                                                            
        _m000 uint32_t                          maximum_length;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .MaximumLength
        _m001 uint32_t                          length;                                 //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Length
        _m002 uint32_t                          flags;                                  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Flags
        _m003 uint32_t                          debug_flags;                            //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .DebugFlags
        _m004 void*                             console_handle;                         //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ConsoleHandle
        _m005 uint32_t                          console_flags;                          //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .ConsoleFlags
        _m006 void*                             standard_input;                         //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .StandardInput
        _m007 void*                             standard_output;                        //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .StandardOutput
        _m008 void*                             standard_error;                         //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .StandardError
        _m009 struct nt::curdir_t               current_directory;                      //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .CurrentDirectory
        _m010 nt::unicode_view                  dll_path;                               //{ +0x0050    +0x0050    +0x0050    +0x0050    +0x0050    } | .DllPath
        _m011 nt::unicode_view                  image_path_name;                        //{ +0x0060    +0x0060    +0x0060    +0x0060    +0x0060    } | .ImagePathName
        _m012 nt::unicode_view                  command_line;                           //{ +0x0070    +0x0070    +0x0070    +0x0070    +0x0070    } | .CommandLine
        _m013 void*                             environment;                            //{ +0x0080    +0x0080    +0x0080    +0x0080    +0x0080    } | .Environment
        _m014 uint32_t                          starting_x;                             //{ +0x0088    +0x0088    +0x0088    +0x0088    +0x0088    } | .StartingX
        _m015 uint32_t                          starting_y;                             //{ +0x008c    +0x008c    +0x008c    +0x008c    +0x008c    } | .StartingY
        _m016 uint32_t                          count_x;                                //{ +0x0090    +0x0090    +0x0090    +0x0090    +0x0090    } | .CountX
        _m017 uint32_t                          count_y;                                //{ +0x0094    +0x0094    +0x0094    +0x0094    +0x0094    } | .CountY
        _m018 uint32_t                          count_chars_x;                          //{ +0x0098    +0x0098    +0x0098    +0x0098    +0x0098    } | .CountCharsX
        _m019 uint32_t                          count_chars_y;                          //{ +0x009c    +0x009c    +0x009c    +0x009c    +0x009c    } | .CountCharsY
        _m020 uint32_t                          fill_attribute;                         //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .FillAttribute
        _m021 uint32_t                          window_flags;                           //{ +0x00a4    +0x00a4    +0x00a4    +0x00a4    +0x00a4    } | .WindowFlags
        _m022 uint32_t                          show_window_flags;                      //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .ShowWindowFlags
        _m023 nt::unicode_view                  window_title;                           //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .WindowTitle
        _m024 nt::unicode_view                  desktop_info;                           //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .DesktopInfo
        _m025 nt::unicode_view                  shell_info;                             //{ +0x00d0    +0x00d0    +0x00d0    +0x00d0    +0x00d0    } | .ShellInfo
        _m026 nt::unicode_view                  runtime_data;                           //{ +0x00e0    +0x00e0    +0x00e0    +0x00e0    +0x00e0    } | .RuntimeData
        _m027 uint64_t                          environment_size;                       //{ +0x03f0    +0x03f0    +0x03f0    +0x03f0    +0x03f0    } | .EnvironmentSize
        _m028 uint64_t                          environment_version;                    //{ +0x03f8    +0x03f8    +0x03f8    +0x03f8    +0x03f8    } | .EnvironmentVersion
        _m029 void*                             package_dependency_data;                //{ +0x0400    +0x0400    +0x0400    +0x0400    +0x0400    } | .PackageDependencyData
        _m030 uint32_t                          process_group_id;                       //{ +0x0408    +0x0408    +0x0408    +0x0408    +0x0408    } | .ProcessGroupId
        _m031 uint32_t                          loader_threads;                         //{ +0x040c    +0x040c    +0x040c    +0x040c    +0x040c    } | .LoaderThreads
                                                                                      
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                                      
        //                                                                            
        _m032 nt::unicode_view                  redirection_dll_name;                   //{ +0x0410    +0x0410    +0x0410    +0x0410    } | .RedirectionDllName
        _m033 nt::unicode_view                  heap_partition_name;                    //{ +0x0420    +0x0420    +0x0420    +0x0420    } | .HeapPartitionName
        _m034 sdk::variant<uint64_t, uint64_t*> default_threadpool_cpu_set_masks;       //{ +0x0430    +0x0430    +0x0430    +0x0430    } | .DefaultThreadpoolCpuSetMasks
        _m035 uint32_t                          default_threadpool_cpu_set_mask_count;  //{ +0x0438    +0x0438    +0x0438    +0x0438    } | .DefaultThreadpoolCpuSetMaskCount
                                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                      
        //                                                                            
        _m036 current_directores_t              current_directores;                     //{ +0x00f0    +0x00f0    +0x00f0    +0x00f0    } | .CurrentDirectores
                                                                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                      
        //                                                                            
        _m037 uint32_t                          default_threadpool_thread_maximum;      //{ +0x043c    +0x043c    +0x043c    } | .DefaultThreadpoolThreadMaximum
                                                                                      
        // WDK 10                                                                     
        //                                                                            
        _m038 current_directories_t             current_directories;                    //{ +0x00f0    } | .CurrentDirectories
                                                                                      
        // Windows 11                                                                 
        //                                                                            
        _m039 uint32_t                          heap_memory_type_mask;                  //{ +0x0440    } | .HeapMemoryTypeMask
                                                                                      
        SDK_NONVOL_PROPERTIES( "_RTL_USER_PROCESS_PARAMETERS.$", 0x440, true, 0x8ae7804c5e1ea6ef );                                      
        SDK_DYNAMIC_SIZE( user_process_parameters_t );                                      
    };                                                                                
};
#include "magic/user_process_parameters_t.end.hpp"
