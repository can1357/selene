#pragma once
#include <sdkgen/support_library.hpp>
#include "completion_status_t.hpp"
#include "../io/allocation_action_t.hpp"
#include "../nt/memory_caching_type_t.hpp"

namespace nt { struct device_object_t;       }
namespace nt { struct irp_t;                 }
namespace nt { struct mdl_t;                 }
namespace nt { struct scatter_gather_list_t; }

#include "magic/operations_t.start.hpp"
namespace dma
{
    struct adapter_t;
    struct adapter_info_t;
    struct transfer_info_t;
    struct common_buffer_vector_t;
    struct common_buffer_extended_configuration_t;

    // [struct _DMA_OPERATIONS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct operations_t                                                                               
    {                                                                                                 
        using pallocate_common_buffer_t =                 sdk::function<void*(struct dma::adapter_t*, uint32_t, int64_t*, uint8_t)>*;                                       
        using pfree_common_buffer_t =                     sdk::function<void(struct dma::adapter_t*, uint32_t, int64_t, void*, uint8_t)>*;                                       
        using pallocate_adapter_channel_t =               sdk::function<int32_t(struct dma::adapter_t*, struct nt::device_object_t*, uint32_t, sdk::function<enum io::allocation_action_t(struct nt::device_object_t*, struct nt::irp_t*, void*, void*)>*, void*)>*;                                       
        using pflush_adapter_buffers_t =                  sdk::function<uint8_t(struct dma::adapter_t*, struct nt::mdl_t*, void*, void*, uint32_t, uint8_t)>*;                                       
        using pfree_map_registers_t =                     sdk::function<void(struct dma::adapter_t*, void*, uint32_t)>*;                                       
        using pmap_transfer_t =                           sdk::function<int64_t(struct dma::adapter_t*, struct nt::mdl_t*, void*, void*, uint32_t*, uint8_t)>*;                                       
        using pget_scatter_gather_list_t =                sdk::function<int32_t(struct dma::adapter_t*, struct nt::device_object_t*, struct nt::mdl_t*, void*, uint32_t, sdk::function<void(struct nt::device_object_t*, struct nt::irp_t*, struct nt::scatter_gather_list_t*, void*)>*, void*, uint8_t)>*;                                       
        using pput_scatter_gather_list_t =                sdk::function<void(struct dma::adapter_t*, struct nt::scatter_gather_list_t*, uint8_t)>*;                                       
        using pcalculate_scatter_gather_list_size_t =     sdk::function<int32_t(struct dma::adapter_t*, struct nt::mdl_t*, void*, uint32_t, uint32_t*, uint32_t*)>*;                                       
        using pbuild_scatter_gather_list_t =              sdk::function<int32_t(struct dma::adapter_t*, struct nt::device_object_t*, struct nt::mdl_t*, void*, uint32_t, sdk::function<void(struct nt::device_object_t*, struct nt::irp_t*, struct nt::scatter_gather_list_t*, void*)>*, void*, uint8_t, void*, uint32_t)>*;                                       
        using pbuild_mdl_from_scatter_gather_list_t =     sdk::function<int32_t(struct dma::adapter_t*, struct nt::scatter_gather_list_t*, struct nt::mdl_t*, struct nt::mdl_t**)>*;                                       
        using pget_dma_adapter_info_t =                   sdk::function<int32_t(struct dma::adapter_t*, struct dma::adapter_info_t*)>*;                                       
        using pget_dma_transfer_info_t =                  sdk::function<int32_t(struct dma::adapter_t*, struct nt::mdl_t*, uint64_t, uint32_t, uint8_t, struct dma::transfer_info_t*)>*;                                       
        using initialize_dma_transfer_context_t =         sdk::function<int32_t(struct dma::adapter_t*, void*)>*;                                       
        using pallocate_common_buffer_ex_t =              sdk::function<void*(struct dma::adapter_t*, int64_t*, uint32_t, int64_t*, uint8_t, uint32_t)>*;                                       
        using pallocate_adapter_channel_ex_t =            sdk::function<int32_t(struct dma::adapter_t*, struct nt::device_object_t*, void*, uint32_t, uint32_t, sdk::function<enum io::allocation_action_t(struct nt::device_object_t*, struct nt::irp_t*, void*, void*)>*, void*, void**)>*;                                       
        using pconfigure_adapter_channel_t =              sdk::function<int32_t(struct dma::adapter_t*, uint32_t, void*)>*;                                       
        using pcancel_adapter_channel_t =                 sdk::function<uint8_t(struct dma::adapter_t*, struct nt::device_object_t*, void*)>*;                                       
        using pmap_transfer_ex_t =                        sdk::function<int32_t(struct dma::adapter_t*, struct nt::mdl_t*, void*, uint64_t, uint32_t, uint32_t*, uint8_t, struct nt::scatter_gather_list_t*, uint32_t, sdk::function<void(struct dma::adapter_t*, struct nt::device_object_t*, void*, enum dma::completion_status_t)>*, void*)>*;                                       
        using pget_scatter_gather_list_ex_t =             sdk::function<int32_t(struct dma::adapter_t*, struct nt::device_object_t*, void*, struct nt::mdl_t*, uint64_t, uint32_t, uint32_t, sdk::function<void(struct nt::device_object_t*, struct nt::irp_t*, struct nt::scatter_gather_list_t*, void*)>*, void*, uint8_t, sdk::function<void(struct dma::adapter_t*, struct nt::device_object_t*, void*, enum dma::completion_status_t)>*, void*, struct nt::scatter_gather_list_t**)>*;                                       
        using pbuild_scatter_gather_list_ex_t =           sdk::function<int32_t(struct dma::adapter_t*, struct nt::device_object_t*, void*, struct nt::mdl_t*, uint64_t, uint32_t, uint32_t, sdk::function<void(struct nt::device_object_t*, struct nt::irp_t*, struct nt::scatter_gather_list_t*, void*)>*, void*, uint8_t, void*, uint32_t, sdk::function<void(struct dma::adapter_t*, struct nt::device_object_t*, void*, enum dma::completion_status_t)>*, void*, void*)>*;                                       
        using pflush_adapter_buffers_ex_t =               sdk::function<int32_t(struct dma::adapter_t*, struct nt::mdl_t*, void*, uint64_t, uint32_t, uint8_t)>*;                                       
        using pfree_adapter_object_t =                    sdk::function<void(struct dma::adapter_t*, enum io::allocation_action_t)>*;                                       
        using cancel_mapped_transfer_t =                  sdk::function<int32_t(struct dma::adapter_t*, void*)>*;                                       
        using pallocate_domain_common_buffer_t =          sdk::function<int32_t(struct dma::adapter_t*, void*, int64_t*, uint32_t, uint32_t, enum nt::memory_caching_type_t*, uint32_t, int64_t*, void**)>*;                                       
        using pflush_dma_buffer_t =                       sdk::function<int32_t(struct dma::adapter_t*, struct nt::mdl_t*, uint8_t)>*;                                       
        using join_dma_domain_t =                         sdk::function<int32_t(struct dma::adapter_t*, void*)>*;                                       
        using pallocate_common_buffer_with_bounds_t =     sdk::function<void*(struct dma::adapter_t*, int64_t*, int64_t*, uint32_t, uint32_t, enum nt::memory_caching_type_t*, uint32_t, int64_t*)>*;                                       
        using pallocate_common_buffer_vector_t =          sdk::function<int32_t(struct dma::adapter_t*, int64_t, int64_t, enum nt::memory_caching_type_t, uint32_t, uint32_t, uint32_t, uint64_t, struct dma::common_buffer_vector_t**)>*;                                       
        using pget_common_buffer_from_vector_by_index_t = sdk::function<void(struct dma::adapter_t*, struct dma::common_buffer_vector_t*, uint32_t, void**, int64_t*)>*;                                       
        using pfree_common_buffer_from_vector_t =         sdk::function<void(struct dma::adapter_t*, struct dma::common_buffer_vector_t*, uint32_t)>*;                                       
        using pfree_common_buffer_vector_t =              sdk::function<void(struct dma::adapter_t*, struct dma::common_buffer_vector_t*)>*;                                       
        using create_common_buffer_from_mdl_t =           sdk::function<int32_t(struct dma::adapter_t*, struct nt::mdl_t*, struct dma::common_buffer_extended_configuration_t*, uint32_t, int64_t*)>*;                                       
                                                                                                      
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                       
        //                                                                                            
        _m000 uint32_t                                         size;                                    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m001 sdk::function<void(struct dma::adapter_t*)>*     put_dma_adapter;                         //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .PutDmaAdapter
        _m002 pallocate_common_buffer_t                        allocate_common_buffer;                  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .AllocateCommonBuffer
        _m003 pfree_common_buffer_t                            free_common_buffer;                      //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .FreeCommonBuffer
        _m004 pallocate_adapter_channel_t                      allocate_adapter_channel;                //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .AllocateAdapterChannel
        _m005 pflush_adapter_buffers_t                         flush_adapter_buffers;                   //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .FlushAdapterBuffers
        _m006 sdk::function<void(struct dma::adapter_t*)>*     free_adapter_channel;                    //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .FreeAdapterChannel
        _m007 pfree_map_registers_t                            free_map_registers;                      //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .FreeMapRegisters
        _m008 pmap_transfer_t                                  map_transfer;                            //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .MapTransfer
        _m009 sdk::function<uint32_t(struct dma::adapter_t*)>* get_dma_alignment;                       //{ +0x0048    +0x0048    +0x0048    +0x0048    +0x0048    } | .GetDmaAlignment
        _m010 sdk::function<uint32_t(struct dma::adapter_t*)>* read_dma_counter;                        //{ +0x0050    +0x0050    +0x0050    +0x0050    +0x0050    } | .ReadDmaCounter
        _m011 pget_scatter_gather_list_t                       get_scatter_gather_list;                 //{ +0x0058    +0x0058    +0x0058    +0x0058    +0x0058    } | .GetScatterGatherList
        _m012 pput_scatter_gather_list_t                       put_scatter_gather_list;                 //{ +0x0060    +0x0060    +0x0060    +0x0060    +0x0060    } | .PutScatterGatherList
        _m013 pcalculate_scatter_gather_list_size_t            calculate_scatter_gather_list;           //{ +0x0068    +0x0068    +0x0068    +0x0068    +0x0068    } | .CalculateScatterGatherList
        _m014 pbuild_scatter_gather_list_t                     build_scatter_gather_list;               //{ +0x0070    +0x0070    +0x0070    +0x0070    +0x0070    } | .BuildScatterGatherList
        _m015 pbuild_mdl_from_scatter_gather_list_t            build_mdl_from_scatter_gather_list;      //{ +0x0078    +0x0078    +0x0078    +0x0078    +0x0078    } | .BuildMdlFromScatterGatherList
        _m016 pget_dma_adapter_info_t                          get_dma_adapter_info;                    //{ +0x0080    +0x0080    +0x0080    +0x0080    +0x0080    } | .GetDmaAdapterInfo
        _m017 pget_dma_transfer_info_t                         get_dma_transfer_info;                   //{ +0x0088    +0x0088    +0x0088    +0x0088    +0x0088    } | .GetDmaTransferInfo
        _m018 initialize_dma_transfer_context_t                initialize_dma_transfer_context;         //{ +0x0090    +0x0090    +0x0090    +0x0090    +0x0090    } | .InitializeDmaTransferContext
        _m019 pallocate_common_buffer_ex_t                     allocate_common_buffer_ex;               //{ +0x0098    +0x0098    +0x0098    +0x0098    +0x0098    } | .AllocateCommonBufferEx
        _m020 pallocate_adapter_channel_ex_t                   allocate_adapter_channel_ex;             //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .AllocateAdapterChannelEx
        _m021 pconfigure_adapter_channel_t                     configure_adapter_channel;               //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .ConfigureAdapterChannel
        _m022 pcancel_adapter_channel_t                        cancel_adapter_channel;                  //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .CancelAdapterChannel
        _m023 pmap_transfer_ex_t                               map_transfer_ex;                         //{ +0x00b8    +0x00b8    +0x00b8    +0x00b8    +0x00b8    } | .MapTransferEx
        _m024 pget_scatter_gather_list_ex_t                    get_scatter_gather_list_ex;              //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .GetScatterGatherListEx
        _m025 pbuild_scatter_gather_list_ex_t                  build_scatter_gather_list_ex;            //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .BuildScatterGatherListEx
        _m026 pflush_adapter_buffers_ex_t                      flush_adapter_buffers_ex;                //{ +0x00d0    +0x00d0    +0x00d0    +0x00d0    +0x00d0    } | .FlushAdapterBuffersEx
        _m027 pfree_adapter_object_t                           free_adapter_object;                     //{ +0x00d8    +0x00d8    +0x00d8    +0x00d8    +0x00d8    } | .FreeAdapterObject
        _m028 cancel_mapped_transfer_t                         cancel_mapped_transfer;                  //{ +0x00e0    +0x00e0    +0x00e0    +0x00e0    +0x00e0    } | .CancelMappedTransfer
        _m029 pallocate_domain_common_buffer_t                 allocate_domain_common_buffer;           //{ +0x00e8    +0x00e8    +0x00e8    +0x00e8    +0x00e8    } | .AllocateDomainCommonBuffer
        _m030 pflush_dma_buffer_t                              flush_dma_buffer;                        //{ +0x00f0    +0x00f0    +0x00f0    +0x00f0    +0x00f0    } | .FlushDmaBuffer
        _m031 join_dma_domain_t                                join_dma_domain;                         //{ +0x00f8    +0x00f8    +0x00f8    +0x00f8    +0x00f8    } | .JoinDmaDomain
        _m032 sdk::function<int32_t(struct dma::adapter_t*)>*  leave_dma_domain;                        //{ +0x0100    +0x0100    +0x0100    +0x0100    +0x0100    } | .LeaveDmaDomain
        _m033 sdk::function<void*(struct dma::adapter_t*)>*    get_dma_domain;                          //{ +0x0108    +0x0108    +0x0108    +0x0108    +0x0108    } | .GetDmaDomain
                                                                                                      
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                                       
        //                                                                                            
        _m034 pallocate_common_buffer_with_bounds_t            allocate_common_buffer_with_bounds;      //{ +0x0110    +0x0110    +0x0110    +0x0110    } | .AllocateCommonBufferWithBounds
        _m035 pallocate_common_buffer_vector_t                 allocate_common_buffer_vector;           //{ +0x0118    +0x0118    +0x0118    +0x0118    } | .AllocateCommonBufferVector
        _m036 pget_common_buffer_from_vector_by_index_t        get_common_buffer_from_vector_by_index;  //{ +0x0120    +0x0120    +0x0120    +0x0120    } | .GetCommonBufferFromVectorByIndex
        _m037 pfree_common_buffer_from_vector_t                free_common_buffer_from_vector;          //{ +0x0128    +0x0128    +0x0128    +0x0128    } | .FreeCommonBufferFromVector
        _m038 pfree_common_buffer_vector_t                     free_common_buffer_vector;               //{ +0x0130    +0x0130    +0x0130    +0x0130    } | .FreeCommonBufferVector
                                                                                                      
        // Windows 11                                                                                 
        //                                                                                            
        _m039 create_common_buffer_from_mdl_t                  create_common_buffer_from_mdl;           //{ +0x0138    } | .CreateCommonBufferFromMdl
                                                                                                      
        SDK_NONVOL_PROPERTIES( "_DMA_OPERATIONS.$", 0x138, true, 0xf894479134a5cd7a );                                       
        SDK_DYNAMIC_SIZE( operations_t );                                                             
    };                                                                                                
};
#include "magic/operations_t.end.hpp"
