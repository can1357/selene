#pragma once
#include <sdkgen/support_library.hpp>
#include "exception_record64_t.hpp"
#include "physical_memory_descriptor64_t.hpp"

#include "magic/dump_header64_t.start.hpp"
namespace nt
{
    // [struct _DUMP_HEADER64]
    // => WDK 10 (NV)
    //
    struct dump_header64_t                                                           
    {                                                                                
        // WDK 10                                                                    
        //                                                                           
        _m000 uint32_t                                  signature;                     //{ +0x0000    } | .Signature
        _m001 uint32_t                                  valid_dump;                    //{ +0x0004    } | .ValidDump
        _m002 uint32_t                                  major_version;                 //{ +0x0008    } | .MajorVersion
        _m003 uint32_t                                  minor_version;                 //{ +0x000c    } | .MinorVersion
        _m004 uint64_t                                  directory_table_base;          //{ +0x0010    } | .DirectoryTableBase
        _m005 uint64_t                                  pfn_data_base;                 //{ +0x0018    } | .PfnDataBase
        _m006 uint64_t                                  ps_loaded_module_list;         //{ +0x0020    } | .PsLoadedModuleList
        _m007 uint64_t                                  ps_active_process_head;        //{ +0x0028    } | .PsActiveProcessHead
        _m008 uint32_t                                  machine_image_type;            //{ +0x0030    } | .MachineImageType
        _m009 uint32_t                                  number_processors;             //{ +0x0034    } | .NumberProcessors
        _m010 uint32_t                                  bug_check_code;                //{ +0x0038    } | .BugCheckCode
        _m011 uint64_t                                  bug_check_parameter1;          //{ +0x0040    } | .BugCheckParameter1
        _m012 uint64_t                                  bug_check_parameter2;          //{ +0x0048    } | .BugCheckParameter2
        _m013 uint64_t                                  bug_check_parameter3;          //{ +0x0050    } | .BugCheckParameter3
        _m014 uint64_t                                  bug_check_parameter4;          //{ +0x0058    } | .BugCheckParameter4
        _m015 sdk::array<char, 32>                      version_user;                  //{ +0x0060    } | .VersionUser
        _m016 uint64_t                                  kd_debugger_data_block;        //{ +0x0080    } | .KdDebuggerDataBlock
        _m017 struct nt::physical_memory_descriptor64_t physical_memory_block;         //{ +0x0088    } | .PhysicalMemoryBlock
        _m018 sdk::array<uint8_t, 700>                  physical_memory_block_buffer;  //{ +0x0088    } | .PhysicalMemoryBlockBuffer
        _m019 sdk::array<uint8_t, 3000>                 context_record;                //{ +0x0348    } | .ContextRecord
        _m020 struct nt::exception_record64_t           exception;                     //{ +0x0f00    } | .Exception
        _m021 uint32_t                                  dump_type;                     //{ +0x0f98    } | .DumpType
        _m022 int64_t                                   required_dump_space;           //{ +0x0fa0    } | .RequiredDumpSpace
        _m023 int64_t                                   system_time;                   //{ +0x0fa8    } | .SystemTime
        _m024 sdk::array<char, 128>                     comment;                       //{ +0x0fb0    } | .Comment
        _m025 int64_t                                   system_up_time;                //{ +0x1030    } | .SystemUpTime
        _m026 uint32_t                                  mini_dump_fields;              //{ +0x1038    } | .MiniDumpFields
        _m027 uint32_t                                  secondary_data_state;          //{ +0x103c    } | .SecondaryDataState
        _m028 uint32_t                                  product_type;                  //{ +0x1040    } | .ProductType
        _m029 uint32_t                                  suite_mask;                    //{ +0x1044    } | .SuiteMask
        _m030 uint32_t                                  writer_status;                 //{ +0x1048    } | .WriterStatus
        _m031 sdk::array<uint8_t, 4020>                 reserved0;                     //{ +0x104c    } | ._reserved0
                                                                                     
        SDK_NONVOL_PROPERTIES( "_DUMP_HEADER64.$", 0x0, false, 0xe10590322487e546 );                             
        SDK_FIXED_SIZE( dump_header64_t, 0x2000 );                                   
    };                                                                               
};
#include "magic/dump_header64_t.end.hpp"
SDK_VERIFY( struct nt::dump_header64_t, 0x2000 );
