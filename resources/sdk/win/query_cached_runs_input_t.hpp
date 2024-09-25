#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/query_cached_runs_input_t.start.hpp"
namespace win
{
    // [struct _QUERY_CACHED_RUNS_INPUT]
    // => Windows 11
    //
    struct query_cached_runs_input_t                        
    {                                                       
        union u0_run_filter_t                               
        {                                                   
            struct u1_bin_range_t                           
            {                                               
                // Windows 11                               
                //                                          
                _m02 uint32_t min;                            //{ +0x0000    } | .Min
                _m03 uint32_t max;                            //{ +0x0004    } | .Max
                                                            
                SDK_MAGIC_PROPERTIES( "_QUERY_CACHED_RUNS_INPUT.RunFilter.BinRange.$", 0x0, false, 0x1301043aae6fca5a );                            
                SDK_FIXED_SIZE( u1_bin_range_t, 0x8 );                            
            };                                              
                                                            
            struct u2_lcn_range_t                           
            {                                               
                // Windows 11                               
                //                                          
                _m05 int64_t min;                             //{ +0x0000    } | .Min
                _m06 int64_t max;                             //{ +0x0008    } | .Max
                                                            
                SDK_MAGIC_PROPERTIES( "_QUERY_CACHED_RUNS_INPUT.RunFilter.LcnRange.$", 0x0, false, 0xd11fa5c6649364c6 );                            
                SDK_FIXED_SIZE( u2_lcn_range_t, 0x10 );                            
            };                                              
                                                            
            struct u3_length_range_t                        
            {                                               
                // Windows 11                               
                //                                          
                _m08 int64_t min;                             //{ +0x0000    } | .Min
                _m09 int64_t max;                             //{ +0x0008    } | .Max
                                                            
                SDK_MAGIC_PROPERTIES( "_QUERY_CACHED_RUNS_INPUT.RunFilter.LengthRange.$", 0x0, false, 0x788d2e3ed17def36 );                            
                SDK_FIXED_SIZE( u3_length_range_t, 0x10 );                            
            };                                              
                                                            
            // Windows 11                                   
            //                                              
            _m04 u1_bin_range_t     bin_range;                //{ +0x0000    } | .BinRange
            _m07 u2_lcn_range_t     lcn_range;                //{ +0x0000    } | .LcnRange
            _m10 u3_length_range_t  length_range;             //{ +0x0000    } | .LengthRange
                                                            
            SDK_MAGIC_PROPERTIES( "_QUERY_CACHED_RUNS_INPUT.RunFilter.$", 0x0, false, 0x6c4f20381d85d5f0 );                        
            SDK_FIXED_SIZE( u0_run_filter_t, 0x10 );                        
        };                                                  
                                                            
        union u4_bin_filter_t                               
        {                                                   
            struct u5_bin_range_t                           
            {                                               
                // Windows 11                               
                //                                          
                _m12 uint32_t min;                            //{ +0x0000    } | .Min
                _m13 uint32_t max;                            //{ +0x0004    } | .Max
                                                            
                SDK_MAGIC_PROPERTIES( "_QUERY_CACHED_RUNS_INPUT.BinFilter.BinRange.$", 0x0, false, 0x662ad59727de797 );                            
                SDK_FIXED_SIZE( u5_bin_range_t, 0x8 );                            
            };                                              
                                                            
            struct u6_length_range_t                        
            {                                               
                // Windows 11                               
                //                                          
                _m15 int64_t min;                             //{ +0x0000    } | .Min
                _m16 int64_t max;                             //{ +0x0008    } | .Max
                                                            
                SDK_MAGIC_PROPERTIES( "_QUERY_CACHED_RUNS_INPUT.BinFilter.LengthRange.$", 0x0, false, 0x71107d09b3072acd );                            
                SDK_FIXED_SIZE( u6_length_range_t, 0x10 );                            
            };                                              
                                                            
            // Windows 11                                   
            //                                              
            _m14 u5_bin_range_t     bin_range;                //{ +0x0000    } | .BinRange
            _m17 u6_length_range_t  length_range;             //{ +0x0000    } | .LengthRange
                                                            
            SDK_MAGIC_PROPERTIES( "_QUERY_CACHED_RUNS_INPUT.BinFilter.$", 0x0, false, 0x2f41d861634175f4 );                        
            SDK_FIXED_SIZE( u4_bin_filter_t, 0x10 );                        
        };                                                  
                                                            
        // Windows 11                                       
        //                                                  
        _m00 uint32_t                            version;     //{ +0x0000    } | .Version
        _m01 uint32_t                            flags;       //{ +0x0004    } | .Flags
        _m11 u0_run_filter_t                     run_filter;  //{ +0x0008    } | .RunFilter
        _m18 u4_bin_filter_t                     bin_filter;  //{ +0x0018    } | .BinFilter
                                                            
        SDK_MAGIC_PROPERTIES( "_QUERY_CACHED_RUNS_INPUT.$", 0x0, false, 0xcf946904d87ab406 );           
        SDK_FIXED_SIZE( query_cached_runs_input_t, 0x28 );           
    };                                                      
};
#include "magic/query_cached_runs_input_t.end.hpp"
SDK_VERIFY( struct win::query_cached_runs_input_t::u0_run_filter_t::u1_bin_range_t, 0x8 );
SDK_VERIFY( struct win::query_cached_runs_input_t::u0_run_filter_t::u2_lcn_range_t, 0x10 );
SDK_VERIFY( struct win::query_cached_runs_input_t::u0_run_filter_t::u3_length_range_t, 0x10 );
SDK_VERIFY( union win::query_cached_runs_input_t::u0_run_filter_t, 0x10 );
SDK_VERIFY( struct win::query_cached_runs_input_t::u4_bin_filter_t::u5_bin_range_t, 0x8 );
SDK_VERIFY( struct win::query_cached_runs_input_t::u4_bin_filter_t::u6_length_range_t, 0x10 );
SDK_VERIFY( union win::query_cached_runs_input_t::u4_bin_filter_t, 0x10 );
SDK_VERIFY( struct win::query_cached_runs_input_t, 0x28 );
