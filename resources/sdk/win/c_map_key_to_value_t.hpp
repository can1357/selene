#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/c_map_key_to_value_t.start.hpp"
namespace win
{
    struct c_plex_t;

    // [class CMapKeyToValue]
    // => Windows 10 v1607
    //
    class c_map_key_to_value_t                                             
    {                                                                      
        // Windows 10 v1607                                                
        //                                                                 
        _m00 uint32_t                                  m_cb_value;           //{ +0x0000    } | .m_cbValue
        _m01 uint32_t                                  m_cb_key;             //{ +0x0004    } | .m_cbKey
        _m02 uint32_t                                  m_cb_key_in_assoc;    //{ +0x0008    } | .m_cbKeyInAssoc
        _m03 uint32_t                                  m_n_hash_table_size;  //{ +0x0018    } | .m_nHashTableSize
        _m04 sdk::function<uint32_t(void*, uint32_t)>* m_lpfn_hash_key;      //{ +0x0020    } | .m_lpfnHashKey
        _m05 int32_t                                   m_n_count;            //{ +0x0028    } | .m_nCount
        _m06 struct win::c_plex_t*                     m_p_blocks;           //{ +0x0038    } | .m_pBlocks
        _m07 int32_t                                   m_n_block_size;       //{ +0x0040    } | .m_nBlockSize
                                                                           
        SDK_MAGIC_PROPERTIES( "CMapKeyToValue.$", 0x0, false, 0xa458abe15963c167 );                    
        SDK_FIXED_SIZE( c_map_key_to_value_t, 0x48 );                      
    };                                                                     
};
#include "magic/c_map_key_to_value_t.end.hpp"
SDK_VERIFY( class win::c_map_key_to_value_t, 0x48 );
