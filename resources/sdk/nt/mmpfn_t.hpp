#pragma once
#include <sdkgen/support_library.hpp>
#include "mmpte_t.hpp"
#include "mipfnblink_t.hpp"
#include "mmpfnentry1_t.hpp"
#include "mmpfnentry3_t.hpp"
#include "../mi/active_pfn_t.hpp"
#include "../mi/pfn_ulong5_t.hpp"
#include "single_list_entry_t.hpp"
#include "../rtl/balanced_node_t.hpp"

#include "magic/mmpfn_t.start.hpp"
namespace nt
{
    struct kevent_t;
    struct kthread_t;

    // [struct _MMPFN]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct mmpfn_t                                                                       
    {                                                                                    
        struct u0_e2_t                                                                   
        {                                                                                
            // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                                           
            //                                                                           
            _m14 uint16_t reference_count;                                                 //{ +0x0000    +0x0000    +0x0000    } | .ReferenceCount
                                                                                         
            SDK_MAGIC_PROPERTIES( "_MMPFN.e2.$", 0x2, true, 0xe7400ebaafab49dc );                                           
            SDK_FIXED_SIZE( u0_e2_t, 0x2 );                                              
        };                                                                               
                                                                                         
        union u3_u4_t                                                                    
        {                                                                                
            // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                                         
            //                                                                           
            _m18 uint36_t pte_frame;                                                       //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .PteFrame
            _m19 uint10_t partition;                                                       //{ +0x0000@40 +0x0000@39 +0x0000@39 } | .Partition
            _m20 uint1_t  file_only;                                                       //{ +0x0000@52 +0x0000@49 +0x0000@49 } | .FileOnly
            _m21 uint1_t  pfn_exists;                                                      //{ +0x0000@53 +0x0000@50 +0x0000@50 } | .PfnExists
            _m22 uint3_t  page_identity;                                                   //{ +0x0000@54 +0x0000@60 +0x0000@60 } | .PageIdentity
            _m23 uint1_t  prototype_pte;                                                   //{ +0x0000@57 +0x0000@63 +0x0000@63 } | .PrototypePte
            _m24 uint64_t entire_field;                                                    //{ +0x0000    +0x0000    +0x0000    } | .EntireField
                                                                                         
            // Windows 10 v2004, Windows 10 v20H2                                         
            //                                                                           
            _m25 uint1_t  resident_page;                                                   //{ +0x0000@36 +0x0000@36 } | .ResidentPage
                                                                                         
            // Windows 10 v1607                                                          
            //                                                                           
            _m26 uint2_t  channel;                                                         //{ +0x0000@36 } | .Channel
            _m27 uint6_t  page_color;                                                      //{ +0x0000@58 } | .PageColor
                                                                                         
            SDK_MAGIC_PROPERTIES( "_MMPFN.u4.$", 0x8, true, 0x90a3b6de8378d0f );                                         
            SDK_FIXED_SIZE( u3_u4_t, 0x8 );                                              
        };                                                                               
                                                                                         
        union u6_u3_t                                                                    
        {                                                                                
            struct u7_e2_t                                                               
            {                                                                            
                // Windows 11                                                            
                //                                                                       
                _m36 uint16_t reference_count;                                             //{ +0x0000    } | .ReferenceCount
                                                                                         
                SDK_MAGIC_PROPERTIES( "_MMPFN.u3.e2.$", 0x0, false, 0x203351c175e9bdf8 );                                                           
                SDK_FIXED_SIZE( u7_e2_t, 0x2 );                                                           
            };                                                                           
                                                                                         
            // Windows 11                                                                
            //                                                                           
            _m33 uint16_t                     reference_count;                             //{ +0x0000    } | .ReferenceCount
            _m34 struct nt::mmpfnentry1_t     e1;                                          //{ +0x0002    } | .e1
            _m35 struct nt::mmpfnentry3_t     e3;                                          //{ +0x0003    } | .e3
            _m37 u7_e2_t                      e2;                                          //{ +0x0000    } | .e2
            _m38 uint32_t                     entire_field;                                //{ +0x0000    } | .EntireField
                                                                                         
            SDK_MAGIC_PROPERTIES( "_MMPFN.u3.$", 0x0, false, 0x8bc593a641e7704c );                                           
            SDK_FIXED_SIZE( u6_u3_t, 0x4 );                                              
        };                                                                               
                                                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                                               
        _m000 nt::list_entry_t                                list_entry;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ListEntry
        _m001 struct rtl::balanced_node_t                     tree_node;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TreeNode
        _m002 void*                                           next;                        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Next
        _m003 varuint_t                                       flink;                       //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Flink
        _m004 varuint_t                                       node_flink_high;             //{ +0x0000@36 +0x0000@36 +0x0028@55 +0x0000@36 } | .NodeFlinkHigh
        _m005 struct nt::mmpte_t*                             pte_address;                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PteAddress
        _m006 uint64_t                                        pte_long;                    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PteLong
        _m007 struct nt::mmpte_t                              original_pte;                //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .OriginalPte
        _m008 struct nt::mipfnblink_t                         u2;                          //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .u2
        _m009 varuint_t                                       entire_field;                //{ +0x0020    +0x0020    +0x0028    +0x0020    } | .EntireField
        _m010 varuint_t                                       node_flink_low;              //{ +0x0027    +0x0027    +0x0000@40 +0x0027    } | .NodeFlinkLow
                                                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                           
        //                                                                               
        _m011 uint16_t                                        reference_count;             //{ +0x0020    +0x0020    +0x0020    } | .ReferenceCount
        _m012 struct nt::mmpfnentry1_t                        e1;                          //{ +0x0022    +0x0022    +0x0022    } | .e1
        _m013 struct nt::mmpfnentry3_t                        e3;                          //{ +0x0023    +0x0023    +0x0023    } | .e3
        _m015 u0_e2_t                                         e2;                          //{ +0x0020    +0x0020    +0x0020    } | .e2
        _m016 uint16_t                                        node_blink_low;              //{ +0x0024    +0x0024    +0x0024    } | .NodeBlinkLow
        _m017 uint8_t                                         view_count;                  //{ +0x0027    +0x0027    +0x0027    } | .ViewCount
        _m028 u3_u4_t                                         u4;                          //{ +0x0028    +0x0028    +0x0028    } | .u4
                                                                                         
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                                                               
        _m029 struct nt::single_list_entry_t                  next_slist_pfn;              //{ +0x0000    +0x0000    +0x0000    } | .NextSlistPfn
        _m030 struct mi::active_pfn_t                         active;                      //{ +0x0000    +0x0000    +0x0000    } | .Active
                                                                                         
        // Windows 10 v2004, Windows 10 v20H2                                            
        //                                                                               
        _m031 uint4_t                                         modified_list_bucket_index;  //{ +0x0027@0  +0x0027@0  } | .ModifiedListBucketIndex
        _m032 uint2_t                                         anchor_large_page_size;      //{ +0x0027@0  +0x0027@0  } | .AnchorLargePageSize
                                                                                         
        // Windows 11                                                                    
        //                                                                               
        _m039 u6_u3_t                                         u3;                          //{ +0x0020    } | .u3
        _m040 struct mi::pfn_ulong5_t                         u5;                          //{ +0x0024    } | .u5
        _m041 uint40_t                                        pte_frame;                   //{ +0x0028@0  } | .PteFrame
        _m042 uint1_t                                         resident_page;               //{ +0x0028@40 } | .ResidentPage
        _m043 uint10_t                                        partition;                   //{ +0x0028@43 } | .Partition
        _m044 uint1_t                                         file_only;                   //{ +0x0028@53 } | .FileOnly
        _m045 uint1_t                                         pfn_exists;                  //{ +0x0028@54 } | .PfnExists
        _m046 uint3_t                                         page_identity;               //{ +0x0028@60 } | .PageIdentity
        _m047 uint1_t                                         prototype_pte;               //{ +0x0028@63 } | .PrototypePte
                                                                                         
        // Windows 10 v1607                                                              
        //                                                                               
        _m048 uint64_t                                        ws_index;                    //{ +0x0000    } | .WsIndex
        _m049 struct nt::kevent_t*                            event;                       //{ +0x0000    } | .Event
        _m050 void volatile*                                  volatile_next;               //{ +0x0000    } | .VolatileNext
        _m051 struct nt::kthread_t*                           kernel_stack_owner;          //{ +0x0000    } | .KernelStackOwner
        _m052 struct nt::single_list_entry_t                  next_stack_pfn;              //{ +0x0000    } | .NextStackPfn
        _m053 void volatile*                                  volatile_pte_address;        //{ +0x0008    } | .VolatilePteAddress
        _m054 uint4_t                                         va_type;                     //{ +0x0026@4  } | .VaType
                                                                                         
        SDK_MAGIC_PROPERTIES( "_MMPFN.$", 0x30, true, 0x4acff7fe68390728 );                           
        SDK_FIXED_SIZE( mmpfn_t, 0x30 );                                                 
    };                                                                                   
};
#include "magic/mmpfn_t.end.hpp"
SDK_VERIFY( struct nt::mmpfn_t::u0_e2_t, 0x2 );
SDK_VERIFY( union nt::mmpfn_t::u3_u4_t, 0x8 );
SDK_VERIFY( struct nt::mmpfn_t::u6_u3_t::u7_e2_t, 0x2 );
SDK_VERIFY( union nt::mmpfn_t::u6_u3_t, 0x4 );
SDK_VERIFY( struct nt::mmpfn_t, 0x30 );
