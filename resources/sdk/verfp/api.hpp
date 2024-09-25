#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace verfp
{
    // [VfpTrieDeleteEmptyNode]
    // Ldr = [netio.sys]
    // => Windows 11
    // netio.sys .text:0x17720, 0x4e8c bytes
    //
    _m0(sdk::unknown_ptr) trie_delete_empty_node;
    
    // [VfpTrieAttachEntryToNode]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // netio.sys .text:0x559b4, 0x4dd3 bytes
    // netio.sys .text:0x55974, 0x4dd3 bytes
    //
    _m1(sdk::unknown_ptr) trie_attach_entry_to_node;
    
    // [VfpTrieDeleteTree]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // netio.sys .text:0x55aa0, 0x4dd3 bytes
    // netio.sys .text:0x55a60, 0x4dd3 bytes
    //
    _m2(sdk::unknown_ptr) trie_delete_tree;
    
    // [VfpTrieDetachEntryFromNode]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // netio.sys .text:0x55b7c, 0x4dd3 bytes
    // netio.sys .text:0x55b3c, 0x4dd3 bytes
    //
    _m3(sdk::unknown_ptr) trie_detach_entry_from_node;
    
    // [VfpTrieFindNumberOfCommonBitsFromLeft]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // netio.sys .text:0x55bf0, 0x4dd3 bytes
    // netio.sys .text:0x55bb0, 0x4dd3 bytes
    //
    _m4(sdk::unknown_ptr) trie_find_number_of_common_bits_from_left;
    
    // [VfpTrieInsertKey]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // netio.sys .text:0x55e60, 0x4dd3 bytes
    // netio.sys .text:0x55e20, 0x4dd3 bytes
    //
    _m5(sdk::unknown_ptr) trie_insert_key;
    
    // [VfpTrieAllocateNode]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x5596c, 0x4dd3 bytes
    // netio.sys .text:0x1add8, 0x4e8c bytes
    // netio.sys .text:0x5592c, 0x4dd3 bytes
    //
    _m6(sdk::unknown_ptr) trie_allocate_node;
    
    // [VfpTrieInsert64bitKey]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x55cb8, 0x4dd3 bytes
    // netio.sys .text:0x1b84c, 0x4e8c bytes
    // netio.sys .text:0x55c78, 0x4dd3 bytes
    //
    _m7(sdk::unknown_ptr) trie_insert64bit_key;
    
    // [VfpTrieLookupKey]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x55f28, 0x4dd3 bytes
    // netio.sys .text:0x17d68, 0x4e8c bytes
    // netio.sys .text:0x55ee8, 0x4dd3 bytes
    //
    _m8(sdk::unknown_ptr) trie_lookup_key;
};
#include "magic/api.end.hpp"
