#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/global_triage_block_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_GLOBAL_TRIAGE_BLOCK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct global_triage_block_t                                                   
    {                                                                              
        struct u0_miniport_block_bindings_t                                        
        {                                                                          
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                         
            //                                                                     
            _m58 uint16_t num_protocols_offset;                                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NumProtocolsOffset
            _m59 uint16_t protocol_list_offset;                                      //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .ProtocolListOffset
            _m60 uint16_t num_filters_offset;                                        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .NumFiltersOffset
            _m61 uint16_t filter_list_offset;                                        //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .FilterListOffset
                                                                                   
            SDK_MAGIC_PROPERTIES( "_NDIS_GLOBAL_TRIAGE_BLOCK.MiniportBlockBindings.$", 0x8, true, 0x6953dc57420973af );                                                         
            SDK_FIXED_SIZE( u0_miniport_block_bindings_t, 0x8 );                                                         
        };                                                                         
                                                                                   
        struct u4_bind_protocol_link_t                                             
        {                                                                          
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                       
            //                                                                     
            _m63 uint16_t size;                                                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
            _m64 uint16_t bind_state_offset;                                         //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .BindStateOffset
            _m65 uint16_t bind_driver_offset;                                        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .BindDriverOffset
            _m66 uint16_t bind_driver_size;                                          //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .BindDriverSize
                                                                                   
            SDK_MAGIC_PROPERTIES( "_NDIS_GLOBAL_TRIAGE_BLOCK.BindProtocolLink.$", 0x8, true, 0x702fe943cae57e88 );                                                       
            SDK_FIXED_SIZE( u4_bind_protocol_link_t, 0x8 );                                                       
        };                                                                         
                                                                                   
        struct u8_bind_filter_link_t                                               
        {                                                                          
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                       
            //                                                                     
            _m68 uint16_t size;                                                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
            _m69 uint16_t bind_state_offset;                                         //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .BindStateOffset
            _m70 uint16_t bind_driver_offset;                                        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .BindDriverOffset
            _m71 uint16_t bind_driver_size;                                          //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .BindDriverSize
                                                                                   
            SDK_MAGIC_PROPERTIES( "_NDIS_GLOBAL_TRIAGE_BLOCK.BindFilterLink.$", 0x8, true, 0xb444c430b699902f );                                                       
            SDK_FIXED_SIZE( u8_bind_filter_link_t, 0x8 );                                                       
        };                                                                         
                                                                                   
        struct u12_bind_state_t                                                    
        {                                                                          
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                        
            //                                                                     
            _m73 uint16_t num_contexts_offset;                                       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NumContextsOffset
            _m74 uint16_t context_list_offset;                                       //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .ContextListOffset
                                                                                   
            SDK_MAGIC_PROPERTIES( "_NDIS_GLOBAL_TRIAGE_BLOCK.BindState.$", 0x4, true, 0xb90c90846d346ced );                                                        
            SDK_FIXED_SIZE( u12_bind_state_t, 0x4 );                                                        
        };                                                                         
                                                                                   
        struct u16_ndis_event_log_t                                                
        {                                                                          
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                       
            //                                                                     
            _m76 uint16_t size;                                                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
            _m77 uint16_t num_entries_offset;                                        //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .NumEntriesOffset
            _m78 uint16_t entry_size_offset;                                         //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .EntrySizeOffset
                                                                                   
            SDK_MAGIC_PROPERTIES( "_NDIS_GLOBAL_TRIAGE_BLOCK.NdisEventLog.$", 0x6, true, 0xd894cd68590f2d4f );                                                       
            SDK_FIXED_SIZE( u16_ndis_event_log_t, 0x6 );                                                       
        };                                                                         
                                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                    
        //                                                                         
        _m000 uint32_t                         signature;                            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Signature
        _m001 uint16_t                         revision;                             //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Revision
        _m002 uint16_t                         size;                                 //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .Size
        _m003 uint16_t                         miniport_block_size;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .MiniportBlockSize
        _m004 uint16_t                         miniport_adapter_context_offset;      //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .MiniportAdapterContextOffset
        _m005 uint16_t                         adapter_instance_name_offset;         //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .AdapterInstanceNameOffset
        _m006 uint16_t                         miniport_lowest_filter_offset;        //{ +0x000e    +0x000e    +0x000e    +0x000e    } | .MiniportLowestFilterOffset
        _m007 uint16_t                         miniport_open_queue_offset;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .MiniportOpenQueueOffset
        _m008 uint16_t                         miniport_driver_handle_offset;        //{ +0x0012    +0x0012    +0x0012    +0x0012    } | .MiniportDriverHandleOffset
        _m009 uint16_t                         miniport_pending_oid_offset;          //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .MiniportPendingOidOffset
        _m010 uint16_t                         miniport_symbolic_link_offset;        //{ +0x0016    +0x0016    +0x0016    +0x0016    } | .MiniportSymbolicLinkOffset
        _m011 uint16_t                         m_driver_block_size;                  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .MDriverBlockSize
        _m012 uint16_t                         miniport_service_name_offset;         //{ +0x001a    +0x001a    +0x001a    +0x001a    } | .MiniportServiceNameOffset
        _m013 uint16_t                         miniport_image_name_offset;           //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .MiniportImageNameOffset
        _m014 uint16_t                         filter_block_size;                    //{ +0x001e    +0x001e    +0x001e    +0x001e    } | .FilterBlockSize
        _m015 uint16_t                         filter_driver_offset;                 //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .FilterDriverOffset
        _m016 uint16_t                         filter_module_context_offset;         //{ +0x0022    +0x0022    +0x0022    +0x0022    } | .FilterModuleContextOffset
        _m017 uint16_t                         filter_higher_filter_offset;          //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .FilterHigherFilterOffset
        _m018 uint16_t                         filter_friendly_name_offset;          //{ +0x0026    +0x0026    +0x0026    +0x0026    } | .FilterFriendlyNameOffset
        _m019 uint16_t                         filter_pending_oid_offset;            //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .FilterPendingOidOffset
        _m020 uint16_t                         filter_miniport_offset;               //{ +0x002a    +0x002a    +0x002a    +0x002a    } | .FilterMiniportOffset
        _m021 uint16_t                         filter_driver_block_size;             //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .FilterDriverBlockSize
        _m022 uint16_t                         filter_driver_friendly_name_offset;   //{ +0x002e    +0x002e    +0x002e    +0x002e    } | .FilterDriverFriendlyNameOffset
        _m023 uint16_t                         filter_service_name_offset;           //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .FilterServiceNameOffset
        _m024 uint16_t                         filter_image_name_offset;             //{ +0x0032    +0x0032    +0x0032    +0x0032    } | .FilterImageNameOffset
        _m025 uint16_t                         open_block_size;                      //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .OpenBlockSize
        _m026 uint16_t                         protocol_handle_offset;               //{ +0x0036    +0x0036    +0x0036    +0x0036    } | .ProtocolHandleOffset
        _m027 uint16_t                         protocol_binding_context_offset;      //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .ProtocolBindingContextOffset
        _m028 uint16_t                         miniport_next_open_offset;            //{ +0x003a    +0x003a    +0x003a    +0x003a    } | .MiniportNextOpenOffset
        _m029 uint16_t                         open_miniport_offset;                 //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .OpenMiniportOffset
        _m030 uint16_t                         protocol_block_size;                  //{ +0x003e    +0x003e    +0x003e    +0x003e    } | .ProtocolBlockSize
        _m031 uint16_t                         protocol_name_offset;                 //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .ProtocolNameOffset
        _m032 uint16_t                         protocol_image_name_offset;           //{ +0x0042    +0x0042    +0x0042    +0x0042    } | .ProtocolImageNameOffset
        _m033 uint16_t                         nbl_pool_list_offset;                 //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .NBLPoolListOffset
        _m034 uint16_t                         allocated_list_offset;                //{ +0x0046    +0x0046    +0x0046    +0x0046    } | .AllocatedListOffset
        _m035 uint16_t                         owner_handle_offset;                  //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .OwnerHandleOffset
        _m036 uint16_t                         lookaside_list_offset;                //{ +0x004a    +0x004a    +0x004a    +0x004a    } | .LookasideListOffset
        _m037 uint16_t                         entry_linkage_offset;                 //{ +0x004c    +0x004c    +0x004c    +0x004c    } | .EntryLinkageOffset
        _m038 uint16_t                         entry_header_size;                    //{ +0x004e    +0x004e    +0x004e    +0x004e    } | .EntryHeaderSize
        _m039 uint16_t                         lookaside_list_size;                  //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .LookasideListSize
        _m040 uint16_t                         s_list_head_offset;                   //{ +0x0052    +0x0052    +0x0052    +0x0052    } | .SListHeadOffset
        _m041 uint16_t                         backup_s_list_head_offset;            //{ +0x0054    +0x0054    +0x0054    +0x0054    } | .BackupSListHeadOffset
        _m042 uint16_t                         nbl_size;                             //{ +0x0056    +0x0056    +0x0056    +0x0056    } | .NblSize
        _m043 uint16_t                         nbl_current_owner_offset;             //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .NblCurrentOwnerOffset
        _m044 uint16_t                         source_handle_offset;                 //{ +0x005a    +0x005a    +0x005a    +0x005a    } | .SourceHandleOffset
        _m045 uint16_t                         ndis_oid_request_size;                //{ +0x005c    +0x005c    +0x005c    +0x005c    } | .NdisOidRequestSize
        _m046 uint16_t                         ndis_track_nbl_owner;                 //{ +0x005e    +0x005e    +0x005e    +0x005e    } | .NdisTrackNblOwner
        _m047 uint16_t                         max_number_of_processors;             //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .MaxNumberOfProcessors
        _m048 uint64_t                         global_net_buffer_list_pool_list;     //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .GlobalNetBufferListPoolList
        _m049 uint64_t                         bugcheck_miniport;                    //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .BugcheckMiniport
        _m050 sdk::array<uint64_t, 32>         pending_nbl;                          //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .PendingNBL
        _m051 sdk::array<uint16_t, 32>         pending_nbl_count;                    //{ +0x0178    +0x0178    +0x0178    +0x0178    } | .PendingNBLCount
        _m052 uint16_t                         nbl_tracker_context_offset;           //{ +0x01b8    +0x01b8    +0x01b8    +0x01b8    } | .NblTrackerContextOffset
        _m053 uint16_t                         miniport_pn_p_event_log_offset;       //{ +0x01ba    +0x01ba    +0x01ba    +0x01ba    } | .MiniportPnPEventLogOffset
        _m054 uint16_t                         miniport_selective_suspend_offset;    //{ +0x01bc    +0x01bc    +0x01bc    +0x01bc    } | .MiniportSelectiveSuspendOffset
        _m055 uint16_t                         miniport_selective_suspend_size;      //{ +0x01be    +0x01be    +0x01be    +0x01be    } | .MiniportSelectiveSuspendSize
        _m056 uint16_t                         miniport_ao_ac_offset;                //{ +0x01c0    +0x01c0    +0x01c0    +0x01c0    } | .MiniportAoAcOffset
        _m057 uint16_t                         miniport_ao_ac_size;                  //{ +0x01c2    +0x01c2    +0x01c2    +0x01c2    } | .MiniportAoAcSize
        _m062 u0_miniport_block_bindings_t     miniport_block_bindings;              //{ +0x01c4    +0x01c4    +0x01c4    +0x01c4    } | .MiniportBlockBindings
        _m067 u4_bind_protocol_link_t          bind_protocol_link;                   //{ +0x01cc    +0x01cc    +0x01cc    +0x01cc    } | .BindProtocolLink
        _m072 u8_bind_filter_link_t            bind_filter_link;                     //{ +0x01d4    +0x01d4    +0x01d4    +0x01d4    } | .BindFilterLink
        _m075 u12_bind_state_t                 bind_state;                           //{ +0x01dc    +0x01dc    +0x01dc    +0x01dc    } | .BindState
        _m079 u16_ndis_event_log_t             ndis_event_log;                       //{ +0x01e0    +0x01e0    +0x01e0    +0x01e0    } | .NdisEventLog
                                                                                   
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                    
        //                                                                         
        _m080 uint16_t                         miniport_hook_adapter_handle_offset;  //{ +0x01e6    +0x01e6    +0x01e6    } | .MiniportHookAdapterHandleOffset
        _m081 uint16_t                         m_driver_hook_driver_handle_offset;   //{ +0x01e8    +0x01e8    +0x01e8    } | .MDriverHookDriverHandleOffset
        _m082 uint16_t                         m_driver_hook_driver_type_offset;     //{ +0x01ea    +0x01ea    +0x01ea    } | .MDriverHookDriverTypeOffset
        _m083 uint16_t                         m_driver_hook_registered_offset;      //{ +0x01ec    +0x01ec    +0x01ec    } | .MDriverHookRegisteredOffset
        _m084 uint16_t                         nbl_tracker_size;                     //{ +0x01ee    +0x01ee    +0x01ee    } | .NblTrackerSize
                                                                                   
        SDK_MAGIC_PROPERTIES( "_NDIS_GLOBAL_TRIAGE_BLOCK.$", 0x1f0, true, 0xedca98ecc10241c5 );                                    
        SDK_DYNAMIC_SIZE( global_triage_block_t );                                    
    };                                                                             
};
#include "magic/global_triage_block_t.end.hpp"
SDK_VERIFY( struct ndis::global_triage_block_t::u0_miniport_block_bindings_t, 0x8 );
SDK_VERIFY( struct ndis::global_triage_block_t::u4_bind_protocol_link_t, 0x8 );
SDK_VERIFY( struct ndis::global_triage_block_t::u8_bind_filter_link_t, 0x8 );
SDK_VERIFY( struct ndis::global_triage_block_t::u12_bind_state_t, 0x4 );
SDK_VERIFY( struct ndis::global_triage_block_t::u16_ndis_event_log_t, 0x6 );
