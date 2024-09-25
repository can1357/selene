#pragma once
#include <sdkgen/support_library.hpp>
#include "../transferflags_t.hpp"
#include "../mapapertureflags_t.hpp"
#include "../discardcontentflags_t.hpp"
#include "../buildpagingbuffer_flushtlb_t.hpp"
#include "../buildpagingbuffer_operation_t.hpp"
#include "../buildpagingbuffer_fillvirtual_t.hpp"
#include "../buildpagingbuffer_notifyresidency_t.hpp"
#include "../buildpagingbuffer_transfervirtual_t.hpp"
#include "../buildpagingbuffer_updatepagetable_t.hpp"
#include "../buildpagingbuffer_copypagetableentries_t.hpp"
#include "../buildpagingbuffer_signalmonitoredfence_t.hpp"
#include "../buildpagingbuffer_updatecontextallocation_t.hpp"

namespace nt { struct mdl_t; }

#include "magic/buildpagingbuffer_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_BUILDPAGINGBUFFER]
    // => WDK 10 (NV)
    //
    struct buildpagingbuffer_t                                                                             
    {                                                                                                      
        struct u0_transfer_t                                                                               
        {                                                                                                  
            struct u1_source_t                                                                             
            {                                                                                              
                // WDK 10                                                                                  
                //                                                                                         
                _m09 uint32_t          segment_id;                                                           //{ +0x0000    } | .SegmentId
                _m10 int64_t           segment_address;                                                      //{ +0x0008    } | .SegmentAddress
                _m11 struct nt::mdl_t* p_mdl;                                                                //{ +0x0008    } | .pMdl
                                                                                                           
                SDK_NONVOL_PROPERTIES( "_DXGKARG_BUILDPAGINGBUFFER.Transfer.Source.$", 0x0, false, 0xd82b193f9477c3a8 );                                                               
                SDK_FIXED_SIZE( u1_source_t, 0x10 );                                                               
            };                                                                                             
                                                                                                           
            struct u2_destination_t                                                                        
            {                                                                                              
                // WDK 10                                                                                  
                //                                                                                         
                _m13 uint32_t          segment_id;                                                           //{ +0x0000    } | .SegmentId
                _m14 int64_t           segment_address;                                                      //{ +0x0008    } | .SegmentAddress
                _m15 struct nt::mdl_t* p_mdl;                                                                //{ +0x0008    } | .pMdl
                                                                                                           
                SDK_NONVOL_PROPERTIES( "_DXGKARG_BUILDPAGINGBUFFER.Transfer.Destination.$", 0x0, false, 0xceecfa04b418906b );                                                               
                SDK_FIXED_SIZE( u2_destination_t, 0x10 );                                                               
            };                                                                                             
                                                                                                           
            // WDK 10                                                                                      
            //                                                                                             
            _m06 void*                                 h_allocation;                                         //{ +0x0000    } | .hAllocation
            _m07 uint32_t                              transfer_offset;                                      //{ +0x0008    } | .TransferOffset
            _m08 uint64_t                              transfer_size;                                        //{ +0x0010    } | .TransferSize
            _m12 u1_source_t                           source;                                               //{ +0x0018    } | .Source
            _m16 u1_source_t                           destination;                                          //{ +0x0028    } | .Destination
            _m17 struct dxgk::transferflags_t          flags;                                                //{ +0x0038    } | .Flags
            _m18 uint32_t                              mdl_offset;                                           //{ +0x003c    } | .MdlOffset
                                                                                                           
            SDK_NONVOL_PROPERTIES( "_DXGKARG_BUILDPAGINGBUFFER.Transfer.$", 0x0, false, 0x2a0aeccae12edcdd );                                               
            SDK_FIXED_SIZE( u0_transfer_t, 0x40 );                                                         
        };                                                                                                 
                                                                                                           
        struct u2_discard_content_t                                                                        
        {                                                                                                  
            // WDK 10                                                                                      
            //                                                                                             
            _m20 void*                              h_allocation;                                            //{ +0x0000    } | .hAllocation
            _m21 struct dxgk::discardcontentflags_t flags;                                                   //{ +0x0008    } | .Flags
            _m22 uint32_t                           segment_id;                                              //{ +0x000c    } | .SegmentId
            _m23 int64_t                            segment_address;                                         //{ +0x0010    } | .SegmentAddress
                                                                                                           
            SDK_NONVOL_PROPERTIES( "_DXGKARG_BUILDPAGINGBUFFER.DiscardContent.$", 0x0, false, 0x641da5d23be144d3 );                                               
            SDK_FIXED_SIZE( u2_discard_content_t, 0x18 );                                                  
        };                                                                                                 
                                                                                                           
        struct u3_read_physical_t                                                                          
        {                                                                                                  
            // WDK 10                                                                                      
            //                                                                                             
            _m25 uint32_t segment_id;                                                                        //{ +0x0000    } | .SegmentId
            _m26 int64_t  physical_address;                                                                  //{ +0x0008    } | .PhysicalAddress
                                                                                                           
            SDK_NONVOL_PROPERTIES( "_DXGKARG_BUILDPAGINGBUFFER.ReadPhysical.$", 0x0, false, 0xa5b5fb8de06fc6f5 );                                                
            SDK_FIXED_SIZE( u3_read_physical_t, 0x10 );                                                    
        };                                                                                                 
                                                                                                           
        struct u4_write_physical_t                                                                         
        {                                                                                                  
            // WDK 10                                                                                      
            //                                                                                             
            _m28 uint32_t segment_id;                                                                        //{ +0x0000    } | .SegmentId
            _m29 int64_t  physical_address;                                                                  //{ +0x0008    } | .PhysicalAddress
                                                                                                           
            SDK_NONVOL_PROPERTIES( "_DXGKARG_BUILDPAGINGBUFFER.WritePhysical.$", 0x0, false, 0x701a3ee0a01bf197 );                                                
            SDK_FIXED_SIZE( u4_write_physical_t, 0x10 );                                                   
        };                                                                                                 
                                                                                                           
        struct u4_map_aperture_segment_t                                                                   
        {                                                                                                  
            // WDK 10                                                                                      
            //                                                                                             
            _m31 void*                           h_device;                                                   //{ +0x0000    } | .hDevice
            _m32 void*                           h_allocation;                                               //{ +0x0008    } | .hAllocation
            _m33 uint32_t                        segment_id;                                                 //{ +0x0010    } | .SegmentId
            _m34 uint64_t                        offset_in_pages;                                            //{ +0x0018    } | .OffsetInPages
            _m35 uint64_t                        number_of_pages;                                            //{ +0x0020    } | .NumberOfPages
            _m36 struct nt::mdl_t*               p_mdl;                                                      //{ +0x0028    } | .pMdl
            _m37 struct dxgk::mapapertureflags_t flags;                                                      //{ +0x0030    } | .Flags
            _m38 uint32_t                        mdl_offset;                                                 //{ +0x0034    } | .MdlOffset
                                                                                                           
            SDK_NONVOL_PROPERTIES( "_DXGKARG_BUILDPAGINGBUFFER.MapApertureSegment.$", 0x0, false, 0x84b7b1d6d4863a1e );                                               
            SDK_FIXED_SIZE( u4_map_aperture_segment_t, 0x38 );                                               
        };                                                                                                 
                                                                                                           
        struct u5_unmap_aperture_segment_t                                                                 
        {                                                                                                  
            // WDK 10                                                                                      
            //                                                                                             
            _m40 void*    h_device;                                                                          //{ +0x0000    } | .hDevice
            _m41 void*    h_allocation;                                                                      //{ +0x0008    } | .hAllocation
            _m42 uint32_t segment_id;                                                                        //{ +0x0010    } | .SegmentId
            _m43 uint64_t offset_in_pages;                                                                   //{ +0x0018    } | .OffsetInPages
            _m44 uint64_t number_of_pages;                                                                   //{ +0x0020    } | .NumberOfPages
            _m45 int64_t  dummy_page;                                                                        //{ +0x0028    } | .DummyPage
                                                                                                           
            SDK_NONVOL_PROPERTIES( "_DXGKARG_BUILDPAGINGBUFFER.UnmapApertureSegment.$", 0x0, false, 0x29839921fb1e2d0b );                                               
            SDK_FIXED_SIZE( u5_unmap_aperture_segment_t, 0x30 );                                               
        };                                                                                                 
                                                                                                           
        struct u6_special_lock_transfer_t                                                                  
        {                                                                                                  
            struct u7_source_t                                                                             
            {                                                                                              
                // WDK 10                                                                                  
                //                                                                                         
                _m50 uint32_t          segment_id;                                                           //{ +0x0000    } | .SegmentId
                _m51 int64_t           segment_address;                                                      //{ +0x0008    } | .SegmentAddress
                _m52 struct nt::mdl_t* p_mdl;                                                                //{ +0x0008    } | .pMdl
                                                                                                           
                SDK_NONVOL_PROPERTIES( "_DXGKARG_BUILDPAGINGBUFFER.SpecialLockTransfer.Source.$", 0x0, false, 0x4c303dc0eb4d3694 );                                                                    
                SDK_FIXED_SIZE( u7_source_t, 0x10 );                                                                    
            };                                                                                             
                                                                                                           
            struct u7_destination_t                                                                        
            {                                                                                              
                // WDK 10                                                                                  
                //                                                                                         
                _m54 uint32_t          segment_id;                                                           //{ +0x0000    } | .SegmentId
                _m55 int64_t           segment_address;                                                      //{ +0x0008    } | .SegmentAddress
                _m56 struct nt::mdl_t* p_mdl;                                                                //{ +0x0008    } | .pMdl
                                                                                                           
                SDK_NONVOL_PROPERTIES( "_DXGKARG_BUILDPAGINGBUFFER.SpecialLockTransfer.Destination.$", 0x0, false, 0x3aa90a51a1981e65 );                                                                    
                SDK_FIXED_SIZE( u7_destination_t, 0x10 );                                                                    
            };                                                                                             
                                                                                                           
            // WDK 10                                                                                      
            //                                                                                             
            _m47 void*                                 h_allocation;                                         //{ +0x0000    } | .hAllocation
            _m48 uint32_t                              transfer_offset;                                      //{ +0x0008    } | .TransferOffset
            _m49 uint64_t                              transfer_size;                                        //{ +0x0010    } | .TransferSize
            _m53 u1_source_t                           source;                                               //{ +0x0018    } | .Source
            _m57 u1_source_t                           destination;                                          //{ +0x0028    } | .Destination
            _m58 struct dxgk::transferflags_t          flags;                                                //{ +0x0038    } | .Flags
            _m59 uint32_t                              swizzling_range_id;                                   //{ +0x003c    } | .SwizzlingRangeId
            _m60 uint32_t                              swizzling_range_data;                                 //{ +0x0040    } | .SwizzlingRangeData
                                                                                                           
            SDK_NONVOL_PROPERTIES( "_DXGKARG_BUILDPAGINGBUFFER.SpecialLockTransfer.$", 0x0, false, 0x96a53a8b4fdf86be );                                                    
            SDK_FIXED_SIZE( u6_special_lock_transfer_t, 0x48 );                                                    
        };                                                                                                 
                                                                                                           
        struct u7_init_context_resource_t                                                                  
        {                                                                                                  
            struct u8_destination_t                                                                        
            {                                                                                              
                // WDK 10                                                                                  
                //                                                                                         
                _m63 uint32_t          segment_id;                                                           //{ +0x0000    } | .SegmentId
                _m64 int64_t           segment_address;                                                      //{ +0x0008    } | .SegmentAddress
                _m65 struct nt::mdl_t* p_mdl;                                                                //{ +0x0008    } | .pMdl
                _m66 void*             virtual_address;                                                      //{ +0x0010    } | .VirtualAddress
                _m67 uint64_t          gpu_virtual_address;                                                  //{ +0x0018    } | .GpuVirtualAddress
                                                                                                           
                SDK_NONVOL_PROPERTIES( "_DXGKARG_BUILDPAGINGBUFFER.InitContextResource.Destination.$", 0x0, false, 0xe2f52391c69df72f );                                                                
                SDK_FIXED_SIZE( u8_destination_t, 0x20 );                                                                
            };                                                                                             
                                                                                                           
            // WDK 10                                                                                      
            //                                                                                             
            _m62 void*                                     h_allocation;                                     //{ +0x0000    } | .hAllocation
            _m68 u8_destination_t                          destination;                                      //{ +0x0008    } | .Destination
                                                                                                           
            SDK_NONVOL_PROPERTIES( "_DXGKARG_BUILDPAGINGBUFFER.InitContextResource.$", 0x0, false, 0x95492ec76643d496 );                                            
            SDK_FIXED_SIZE( u7_init_context_resource_t, 0x28 );                                            
        };                                                                                                 
                                                                                                           
        using copy_page_table_entries_t =   struct dxgk::buildpagingbuffer_copypagetableentries_t;                               
        using update_context_allocation_t = struct dxgk::buildpagingbuffer_updatecontextallocation_t;                               
        using signal_monitored_fence_t =    struct dxgk::buildpagingbuffer_signalmonitoredfence_t;                               
                                                                                                           
        // WDK 10                                                                                          
        //                                                                                                 
        _m00 void*                                                          p_dma_buffer;                    //{ +0x0000    } | .pDmaBuffer
        _m01 uint32_t                                                       dma_size;                        //{ +0x0008    } | .DmaSize
        _m02 void*                                                          p_dma_buffer_private_data;       //{ +0x0010    } | .pDmaBufferPrivateData
        _m03 uint32_t                                                       dma_buffer_private_data_size;    //{ +0x0018    } | .DmaBufferPrivateDataSize
        _m04 enum dxgk::buildpagingbuffer_operation_t                       operation;                       //{ +0x001c    } | .Operation
        _m05 uint32_t                                                       multipass_offset;                //{ +0x0020    } | .MultipassOffset
        _m19 u0_transfer_t                                                  transfer;                        //{ +0x0028    } | .Transfer
        _m24 u2_discard_content_t                                           discard_content;                 //{ +0x0028    } | .DiscardContent
        _m27 u3_read_physical_t                                             read_physical;                   //{ +0x0028    } | .ReadPhysical
        _m30 u3_read_physical_t                                             write_physical;                  //{ +0x0028    } | .WritePhysical
        _m39 u4_map_aperture_segment_t                                      map_aperture_segment;            //{ +0x0028    } | .MapApertureSegment
        _m46 u5_unmap_aperture_segment_t                                    unmap_aperture_segment;          //{ +0x0028    } | .UnmapApertureSegment
        _m61 u6_special_lock_transfer_t                                     special_lock_transfer;           //{ +0x0028    } | .SpecialLockTransfer
        _m69 u7_init_context_resource_t                                     init_context_resource;           //{ +0x0028    } | .InitContextResource
        _m70 struct dxgk::buildpagingbuffer_transfervirtual_t               transfer_virtual;                //{ +0x0028    } | .TransferVirtual
        _m71 struct dxgk::buildpagingbuffer_fillvirtual_t                   fill_virtual;                    //{ +0x0028    } | .FillVirtual
        _m72 struct dxgk::buildpagingbuffer_updatepagetable_t               update_page_table;               //{ +0x0028    } | .UpdatePageTable
        _m73 struct dxgk::buildpagingbuffer_flushtlb_t                      flush_tlb;                       //{ +0x0028    } | .FlushTlb
        _m74 copy_page_table_entries_t                                      copy_page_table_entries;         //{ +0x0028    } | .CopyPageTableEntries
        _m75 update_context_allocation_t                                    update_context_allocation;       //{ +0x0028    } | .UpdateContextAllocation
        _m76 struct dxgk::buildpagingbuffer_notifyresidency_t               notify_residency;                //{ +0x0028    } | .NotifyResidency
        _m77 signal_monitored_fence_t                                       signal_monitored_fence;          //{ +0x0028    } | .SignalMonitoredFence
        _m78 void*                                                          h_system_context;                //{ +0x0128    } | .hSystemContext
        _m79 uint64_t                                                       dma_buffer_gpu_virtual_address;  //{ +0x0130    } | .DmaBufferGpuVirtualAddress
        _m80 uint32_t                                                       dma_buffer_write_offset;         //{ +0x0138    } | .DmaBufferWriteOffset
                                                                                                           
        SDK_NONVOL_PROPERTIES( "_DXGKARG_BUILDPAGINGBUFFER.$", 0x0, false, 0x9d41885d3f2a1865 );                               
        SDK_FIXED_SIZE( buildpagingbuffer_t, 0x140 );                                                      
    };                                                                                                     
};
#include "magic/buildpagingbuffer_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::buildpagingbuffer_t::u0_transfer_t::u1_source_t, 0x10 );
SDK_VERIFY( struct dxgk::arg::buildpagingbuffer_t::u0_transfer_t::u2_destination_t, 0x10 );
SDK_VERIFY( struct dxgk::arg::buildpagingbuffer_t::u0_transfer_t, 0x40 );
SDK_VERIFY( struct dxgk::arg::buildpagingbuffer_t::u2_discard_content_t, 0x18 );
SDK_VERIFY( struct dxgk::arg::buildpagingbuffer_t::u3_read_physical_t, 0x10 );
SDK_VERIFY( struct dxgk::arg::buildpagingbuffer_t::u4_write_physical_t, 0x10 );
SDK_VERIFY( struct dxgk::arg::buildpagingbuffer_t::u4_map_aperture_segment_t, 0x38 );
SDK_VERIFY( struct dxgk::arg::buildpagingbuffer_t::u5_unmap_aperture_segment_t, 0x30 );
SDK_VERIFY( struct dxgk::arg::buildpagingbuffer_t::u6_special_lock_transfer_t::u7_source_t, 0x10 );
SDK_VERIFY( struct dxgk::arg::buildpagingbuffer_t::u6_special_lock_transfer_t::u7_destination_t, 0x10 );
SDK_VERIFY( struct dxgk::arg::buildpagingbuffer_t::u6_special_lock_transfer_t, 0x48 );
SDK_VERIFY( struct dxgk::arg::buildpagingbuffer_t::u7_init_context_resource_t::u8_destination_t, 0x20 );
SDK_VERIFY( struct dxgk::arg::buildpagingbuffer_t::u7_init_context_resource_t, 0x28 );
SDK_VERIFY( struct dxgk::arg::buildpagingbuffer_t, 0x140 );
