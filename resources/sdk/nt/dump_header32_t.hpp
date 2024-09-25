#pragma once
#include <sdkgen/support_library.hpp>
#include "exception_record32_t.hpp"
#include "physical_memory_descriptor32_t.hpp"

#include "magic/dump_header32_t.start.hpp"
namespace nt
{
    // [struct _DUMP_HEADER32]
    // => WDK 10 (NV)
    //
    struct dump_header32_t                                                           
    {                                                                                
        // WDK 10                                                                    
        //                                                                           
        _m000 uint32_t                                  signature;                     //{ +0x0000    } | .Signature
        _m001 uint32_t                                  valid_dump;                    //{ +0x0004    } | .ValidDump
        _m002 uint32_t                                  major_version;                 //{ +0x0008    } | .MajorVersion
        _m003 uint32_t                                  minor_version;                 //{ +0x000c    } | .MinorVersion
        _m004 uint32_t                                  directory_table_base;          //{ +0x0010    } | .DirectoryTableBase
        _m005 uint32_t                                  pfn_data_base;                 //{ +0x0014    } | .PfnDataBase
        _m006 uint32_t                                  ps_loaded_module_list;         //{ +0x0018    } | .PsLoadedModuleList
        _m007 uint32_t                                  ps_active_process_head;        //{ +0x001c    } | .PsActiveProcessHead
        _m008 uint32_t                                  machine_image_type;            //{ +0x0020    } | .MachineImageType
        _m009 uint32_t                                  number_processors;             //{ +0x0024    } | .NumberProcessors
        _m010 uint32_t                                  bug_check_code;                //{ +0x0028    } | .BugCheckCode
        _m011 uint32_t                                  bug_check_parameter1;          //{ +0x002c    } | .BugCheckParameter1
        _m012 uint32_t                                  bug_check_parameter2;          //{ +0x0030    } | .BugCheckParameter2
        _m013 uint32_t                                  bug_check_parameter3;          //{ +0x0034    } | .BugCheckParameter3
        _m014 uint32_t                                  bug_check_parameter4;          //{ +0x0038    } | .BugCheckParameter4
        _m015 sdk::array<char, 32>                      version_user;                  //{ +0x003c    } | .VersionUser
        _m016 uint8_t                                   pae_enabled;                   //{ +0x005c    } | .PaeEnabled
        _m017 uint32_t                                  kd_debugger_data_block;        //{ +0x0060    } | .KdDebuggerDataBlock
        _m018 struct nt::physical_memory_descriptor32_t physical_memory_block;         //{ +0x0064    } | .PhysicalMemoryBlock
        _m019 sdk::array<uint8_t, 700>                  physical_memory_block_buffer;  //{ +0x0064    } | .PhysicalMemoryBlockBuffer
        _m020 sdk::array<uint8_t, 1200>                 context_record;                //{ +0x0320    } | .ContextRecord
        _m021 struct nt::exception_record32_t           exception;                     //{ +0x07d0    } | .Exception
        _m022 sdk::array<char, 128>                     comment;                       //{ +0x0820    } | .Comment
        _m023 sdk::array<uint8_t, 1768>                 reserved0;                     //{ +0x08a0    } | ._reserved0
        _m024 uint32_t                                  dump_type;                     //{ +0x0f88    } | .DumpType
        _m025 uint32_t                                  mini_dump_fields;              //{ +0x0f8c    } | .MiniDumpFields
        _m026 uint32_t                                  secondary_data_state;          //{ +0x0f90    } | .SecondaryDataState
        _m027 uint32_t                                  product_type;                  //{ +0x0f94    } | .ProductType
        _m028 uint32_t                                  suite_mask;                    //{ +0x0f98    } | .SuiteMask
        _m029 uint32_t                                  writer_status;                 //{ +0x0f9c    } | .WriterStatus
        _m030 int64_t                                   required_dump_space;           //{ +0x0fa0    } | .RequiredDumpSpace
        _m031 sdk::array<uint8_t, 16>                   reserved2;                     //{ +0x0fa8    } | ._reserved2
        _m032 int64_t                                   system_up_time;                //{ +0x0fb8    } | .SystemUpTime
        _m033 int64_t                                   system_time;                   //{ +0x0fc0    } | .SystemTime
        _m034 sdk::array<uint8_t, 56>                   reserved3;                     //{ +0x0fc8    } | ._reserved3
                                                                                     
        SDK_NONVOL_PROPERTIES( "_DUMP_HEADER32.$", 0x0, false, 0xae322a8f0d8a7f55 );                             
        SDK_FIXED_SIZE( dump_header32_t, 0x1000 );                                   
    };                                                                               
};
#include "magic/dump_header32_t.end.hpp"
SDK_VERIFY( struct nt::dump_header32_t, 0x1000 );
