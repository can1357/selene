#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mmwsl_shared_t.start.hpp"
namespace nt
{
    struct mmwsle_t;
    struct mmwsle_hash_t;
    struct mmwsle_nondirect_hash_t;

    // [struct _MMWSL_SHARED]
    // => Windows 10 v1607
    //
    struct mmwsl_shared_t                                                       
    {                                                                           
        // Windows 10 v1607                                                     
        //                                                                      
        _m00 uint64_t                            first_free;                      //{ +0x0000    } | .FirstFree
        _m01 uint64_t                            first_dynamic;                   //{ +0x0008    } | .FirstDynamic
        _m02 uint64_t                            last_entry;                      //{ +0x0010    } | .LastEntry
        _m03 uint64_t                            last_initialized_wsle;           //{ +0x0018    } | .LastInitializedWsle
        _m04 uint32_t                            wsle_size;                       //{ +0x0020    } | .WsleSize
        _m05 uint64_t                            non_direct_count;                //{ +0x0028    } | .NonDirectCount
        _m06 void*                               lowest_pagable_address;          //{ +0x0030    } | .LowestPagableAddress
        _m07 struct nt::mmwsle_nondirect_hash_t* non_direct_hash;                 //{ +0x0038    } | .NonDirectHash
        _m08 struct nt::mmwsle_hash_t*           hash_table_start;                //{ +0x0040    } | .HashTableStart
        _m09 struct nt::mmwsle_hash_t*           highest_permitted_hash_address;  //{ +0x0048    } | .HighestPermittedHashAddress
        _m10 struct nt::mmwsle_t*                wsle;                            //{ +0x0050    } | .Wsle
                                                                                
        SDK_MAGIC_PROPERTIES( "_MMWSL_SHARED.$", 0x0, false, 0x267c0aef6375b645 );                               
        SDK_FIXED_SIZE( mmwsl_shared_t, 0x60 );                                 
    };                                                                          
};
#include "magic/mmwsl_shared_t.end.hpp"
SDK_VERIFY( struct nt::mmwsl_shared_t, 0x60 );
