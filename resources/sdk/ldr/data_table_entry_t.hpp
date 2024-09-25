#pragma once
#include <sdkgen/support_library.hpp>
#include "dll_load_reason_t.hpp"
#include "hot_patch_state_t.hpp"
#include "../rtl/balanced_node_t.hpp"

namespace ldrp { struct load_context_t;       }
namespace nt   { struct activation_context_t; }

#include "magic/data_table_entry_t.start.hpp"
namespace ldr
{
    struct ddag_node_t;

    // [struct _LDR_DATA_TABLE_ENTRY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct data_table_entry_t                                                 
    {                                                                         
        using entry_point_t = sdk::variant<sdk::function<uint8_t(void*, uint32_t, void*)>*, void*>;                               
                                                                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                                    
        _m000 nt::list_entry_t                 in_load_order_links;             //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .InLoadOrderLinks
        _m001 nt::list_entry_t                 in_memory_order_links;           //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .InMemoryOrderLinks
        _m002 nt::list_entry_t                 in_initialization_order_links;   //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .InInitializationOrderLinks
        _m003 void*                            dll_base;                        //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .DllBase
        _m004 entry_point_t                    entry_point;                     //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .EntryPoint
        _m005 uint32_t                         size_of_image;                   //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .SizeOfImage
        _m006 nt::unicode_view                 full_dll_name;                   //{ +0x0048    +0x0048    +0x0048    +0x0048    +0x0048    } | .FullDllName
        _m007 nt::unicode_view                 base_dll_name;                   //{ +0x0058    +0x0058    +0x0058    +0x0058    +0x0058    } | .BaseDllName
        _m008 sdk::array<uint8_t, 4>           flag_group;                      //{ +0x0068    +0x0068    +0x0068    +0x0068    +0x0068    } | .FlagGroup
        _m009 uint32_t                         flags;                           //{ +0x0068    +0x0068    +0x0068    +0x0068    +0x0068    } | .Flags
        _m010 uint1_t                          packaged_binary;                 //{ +0x0068@0  +0x0068@0  +0x0068@0  +0x0068@0  +0x0068@0  } | .PackagedBinary
        _m011 uint1_t                          marked_for_removal;              //{ +0x0068@1  +0x0068@1  +0x0068@1  +0x0068@1  +0x0068@1  } | .MarkedForRemoval
        _m012 uint1_t                          image_dll;                       //{ +0x0068@2  +0x0068@2  +0x0068@2  +0x0068@2  +0x0068@2  } | .ImageDll
        _m013 uint1_t                          load_notifications_sent;         //{ +0x0068@3  +0x0068@3  +0x0068@3  +0x0068@3  +0x0068@3  } | .LoadNotificationsSent
        _m014 uint1_t                          telemetry_entry_processed;       //{ +0x0068@4  +0x0068@4  +0x0068@4  +0x0068@4  +0x0068@4  } | .TelemetryEntryProcessed
        _m015 uint1_t                          process_static_import;           //{ +0x0068@5  +0x0068@5  +0x0068@5  +0x0068@5  +0x0068@5  } | .ProcessStaticImport
        _m016 uint1_t                          in_legacy_lists;                 //{ +0x0068@6  +0x0068@6  +0x0068@6  +0x0068@6  +0x0068@6  } | .InLegacyLists
        _m017 uint1_t                          in_indexes;                      //{ +0x0068@7  +0x0068@7  +0x0068@7  +0x0068@7  +0x0068@7  } | .InIndexes
        _m018 uint1_t                          shim_dll;                        //{ +0x0068@8  +0x0068@8  +0x0068@8  +0x0068@8  +0x0068@8  } | .ShimDll
        _m019 uint1_t                          in_exception_table;              //{ +0x0068@9  +0x0068@9  +0x0068@9  +0x0068@9  +0x0068@9  } | .InExceptionTable
        _m020 uint1_t                          load_in_progress;                //{ +0x0068@12 +0x0068@12 +0x0068@12 +0x0068@12 +0x0068@12 } | .LoadInProgress
        _m021 uint1_t                          load_config_processed;           //{ +0x0068@13 +0x0068@13 +0x0068@13 +0x0068@13 +0x0068@13 } | .LoadConfigProcessed
        _m022 uint1_t                          entry_processed;                 //{ +0x0068@14 +0x0068@14 +0x0068@14 +0x0068@14 +0x0068@14 } | .EntryProcessed
        _m023 uint1_t                          protect_delay_load;              //{ +0x0068@15 +0x0068@15 +0x0068@15 +0x0068@15 +0x0068@15 } | .ProtectDelayLoad
        _m024 uint1_t                          dont_call_for_threads;           //{ +0x0068@18 +0x0068@18 +0x0068@18 +0x0068@18 +0x0068@18 } | .DontCallForThreads
        _m025 uint1_t                          process_attach_called;           //{ +0x0068@19 +0x0068@19 +0x0068@19 +0x0068@19 +0x0068@19 } | .ProcessAttachCalled
        _m026 uint1_t                          process_attach_failed;           //{ +0x0068@20 +0x0068@20 +0x0068@20 +0x0068@20 +0x0068@20 } | .ProcessAttachFailed
        _m027 uint1_t                          cor_deferred_validate;           //{ +0x0068@21 +0x0068@21 +0x0068@21 +0x0068@21 +0x0068@21 } | .CorDeferredValidate
        _m028 uint1_t                          cor_image;                       //{ +0x0068@22 +0x0068@22 +0x0068@22 +0x0068@22 +0x0068@22 } | .CorImage
        _m029 uint1_t                          dont_relocate;                   //{ +0x0068@23 +0x0068@23 +0x0068@23 +0x0068@23 +0x0068@23 } | .DontRelocate
        _m030 uint1_t                          cor_il_only;                     //{ +0x0068@24 +0x0068@24 +0x0068@24 +0x0068@24 +0x0068@24 } | .CorILOnly
        _m031 uint1_t                          redirected;                      //{ +0x0068@28 +0x0068@28 +0x0068@28 +0x0068@28 +0x0068@28 } | .Redirected
        _m032 uint1_t                          compat_database_processed;       //{ +0x0068@31 +0x0068@31 +0x0068@31 +0x0068@31 +0x0068@31 } | .CompatDatabaseProcessed
        _m033 uint16_t                         obsolete_load_count;             //{ +0x006c    +0x006c    +0x006c    +0x006c    +0x006c    } | .ObsoleteLoadCount
        _m034 uint16_t                         tls_index;                       //{ +0x006e    +0x006e    +0x006e    +0x006e    +0x006e    } | .TlsIndex
        _m035 nt::list_entry_t                 hash_links;                      //{ +0x0070    +0x0070    +0x0070    +0x0070    +0x0070    } | .HashLinks
        _m036 uint32_t                         time_date_stamp;                 //{ +0x0080    +0x0080    +0x0080    +0x0080    +0x0080    } | .TimeDateStamp
        _m037 struct nt::activation_context_t* entry_point_activation_context;  //{ +0x0088    +0x0088    +0x0088    +0x0088    +0x0088    } | .EntryPointActivationContext
        _m038 void*                            lock;                            //{ +0x0090    +0x0090    +0x0090    +0x0090    +0x0090    } | .Lock
        _m039 struct ldr::ddag_node_t*         ddag_node;                       //{ +0x0098    +0x0098    +0x0098    +0x0098    +0x0098    } | .DdagNode
        _m040 nt::list_entry_t                 node_module_link;                //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .NodeModuleLink
        _m041 struct ldrp::load_context_t*     load_context;                    //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .LoadContext
        _m042 void*                            parent_dll_base;                 //{ +0x00b8    +0x00b8    +0x00b8    +0x00b8    +0x00b8    } | .ParentDllBase
        _m043 void*                            switch_back_context;             //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .SwitchBackContext
        _m044 struct rtl::balanced_node_t      base_address_index_node;         //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .BaseAddressIndexNode
        _m045 struct rtl::balanced_node_t      mapping_info_index_node;         //{ +0x00e0    +0x00e0    +0x00e0    +0x00e0    +0x00e0    } | .MappingInfoIndexNode
        _m046 uint64_t                         original_base;                   //{ +0x00f8    +0x00f8    +0x00f8    +0x00f8    +0x00f8    } | .OriginalBase
        _m047 int64_t                          load_time;                       //{ +0x0100    +0x0100    +0x0100    +0x0100    +0x0100    } | .LoadTime
        _m048 uint32_t                         base_name_hash_value;            //{ +0x0108    +0x0108    +0x0108    +0x0108    +0x0108    } | .BaseNameHashValue
        _m049 enum ldr::dll_load_reason_t      load_reason;                     //{ +0x010c    +0x010c    +0x010c    +0x010c    +0x010c    } | .LoadReason
        _m050 uint32_t                         implicit_path_options;           //{ +0x0110    +0x0110    +0x0110    +0x0110    +0x0110    } | .ImplicitPathOptions
        _m051 uint32_t                         reference_count;                 //{ +0x0114    +0x0114    +0x0114    +0x0114    +0x0114    } | .ReferenceCount
        _m052 uint32_t                         dependent_load_flags;            //{ +0x0118    +0x0118    +0x0118    +0x0118    +0x0118    } | .DependentLoadFlags
                                                                              
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                                    
        _m053 uint1_t                          chpe_image;                      //{ +0x0068@25 +0x0068@25 +0x0068@25 +0x0068@25 } | .ChpeImage
        _m054 uint8_t                          signing_level;                   //{ +0x011c    +0x011c    +0x011c    +0x011c    } | .SigningLevel
                                                                              
        // WDK 10                                                             
        //                                                                    
        _m055 nt::list_entry_t                 in_progress_links;               //{ +0x0020    } | .InProgressLinks
                                                                              
        // Windows 11                                                         
        //                                                                    
        _m056 uint1_t                          chpe_emulator_image;             //{ +0x0068@26 } | .ChpeEmulatorImage
        _m057 uint32_t                         check_sum;                       //{ +0x0120    } | .CheckSum
        _m058 void*                            active_patch_image_base;         //{ +0x0128    } | .ActivePatchImageBase
        _m059 enum ldr::hot_patch_state_t      hot_patch_state;                 //{ +0x0130    } | .HotPatchState
                                                                              
        SDK_NONVOL_PROPERTIES( "_LDR_DATA_TABLE_ENTRY.$", 0x120, true, 0x5229d3c4ddae58d4 );                               
        SDK_DYNAMIC_SIZE( data_table_entry_t );                               
    };                                                                        
};
#include "magic/data_table_entry_t.end.hpp"
