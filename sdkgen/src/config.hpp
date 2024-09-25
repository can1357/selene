#pragma once
#include <array>
#include <string_view>
#include <xstd/type_helpers.hpp>
#include <xstd/environment.hpp>

namespace sdk::config
{
    static constexpr size_t long_name_limit = 48;
    static const std::filesystem::path sym_dir = xstd::getenvf( "SeleneRoot" ) / "resources" / "symbols";

    // Kernel versions we do base validation on.
    //
    struct build_entry
    {
        std::filesystem::path path;
        std::string_view friendly_name;
        std::string_view suffix_name;
        bool             sdk_compilation;
    };
    inline const build_entry builds[] =
    {
        //{ sym_dir / "Win7 Symbols",       "Windows 7",        "win7",         false }, // | Order of preference
        //{ sym_dir / "Win8.1 Symbols",     "Windows 8.1",      "win81",        false }, // |
        { sym_dir / "WDK Symbols",        "WDK 10",           "wdk",         true  }, // |
        { sym_dir / "Win10 1607 Symbols", "Windows 10 v1607", "win10_1607",  false }, // |
        { sym_dir / "Win10 2004 Symbols", "Windows 10 v2004", "win10_2004",  false }, // v
        { sym_dir / "Win11 Symbols",      "Windows 11",       "win11",       false }, // v
        { sym_dir / "Win10 20H2 Symbols", "Windows 10 v20H2", "win10_20h2",  false }, // v
    };
    inline constexpr size_t num_builds = std::size( builds );

    // PDB files we're interested in building headers for.
    //
    using loader_group_base = std::array<std::string_view, 3>;
    static constexpr loader_group_base loader_groups[] = {
        { "ntoskrnl.exe", "hal.dll" },
        { "win32kfull.sys", "win32kbase.sys", "win32k.sys" },
        { "pci.sys" },
        { "mouclass.sys" },
        { "kbdclass.sys" },
        { "hidclass.sys" },
        { "ndis.sys" },
        { "storahci.sys" },
        { "stornvme.sys" },
        { "storport.sys" },
        { "scsiport.sys" },
        { "ataport.sys" },
        { "atapi.sys" },
        { "fltMgr.sys" },
        { "ci.dll" },
        { "afd.sys" },
        { "netio.sys" },
        { "tdi.sys" },
        { "tcpip.sys" },
        { "dxgkrnl.sys" },
        { "dxgmms2.sys" },
		  { "disk.sys" },
		  { "dxgi.dll" },
		  { "ntdll.dll" }
    };

    struct loader_group
    {
        // Construct by reference to list.
        //
        const loader_group_base& list;
        constexpr loader_group( const loader_group_base& list = xstd::make_default<loader_group_base>() ) : list( list ) {}

        // Array interface and comparison.
        //
        constexpr const std::string_view& operator[]( size_t n ) const noexcept { return list[ n ]; }
        constexpr bool empty() const noexcept { return list.front().empty(); }
        constexpr auto begin() const noexcept { return list.begin(); }
        constexpr auto end() const noexcept { return list.begin() + size(); }
        constexpr auto& front() const noexcept { return list.front(); }
        constexpr auto& back() const noexcept { return list[ std::max( size(), 1ull ) - 1 ]; }
        constexpr size_t size() const noexcept
        {
            size_t n = 0;
            for ( ; n != 3 && !list[ n ].empty(); n++ );
            return n;
        }
        bool operator==( const loader_group& o ) const noexcept
        {
            return &list == &o.list;
        }
        bool operator<( const loader_group& o ) const noexcept
        {
            return &list < &o.list;
        }
    };

    struct pdb_entry
    {
        std::string_view ns_tag;
        std::string_view path;
        loader_group ldr_group = {};
        size_t group_index = 0;

        constexpr bool type_only() const { return ldr_group.empty(); }
    };
    inline constexpr pdb_entry symbol_collection[] = {
        { "nt",         "ntkrnlmp.pdb",                 loader_groups[ 0 ], 0 },                     // ^
        { "nt",         "hal.pdb",                      loader_groups[ 0 ], 1 },                     // | Order of preference
        { "nt",         "ForceEmitTypes_1.pdb",         {} },                                        // |
        { "nt",         "ForceEmitTypes_2.pdb",         {} },                                        // |
        { "nt",         "ForceEmitTypes_3.pdb",         {} },                                        // |
        { "nt",         "ForceEmitTypes_4.pdb",         {} },                                        // |
        { "nt",         "ForceEmitTypes_5.pdb",         {} },                                        // |
        { "nt",         "ForceEmitTypes_6.pdb",         {} },                                        // |
        { "nt",         "ForceEmitTypes_7.pdb",         {} },                                        // |
        { "nt",         "ForceEmitTypes_8.pdb",         {} },                                        // |
        { "ci",         "ci.pdb",                       loader_groups[ 14 ] },                       // |
                                                                                                     // |
        { "kuser",      "win32kfull.pdb",               loader_groups[ 1 ], 0 },                     // |
        { "kuser",      "win32kbase.pdb",               loader_groups[ 1 ], 1 },                     // |
        { "kuser",      "win32k.pdb",                   loader_groups[ 1 ], 2 },                     // |
                                                                                                     // |
        { "wuser",      "win32u.pdb",                   {} },                                        // |
        { "wuser",      "user32.pdb",                   {} },                                        // |
                                                                                                     // |
        { "pci",        "pci.pdb",                      loader_groups[ 2 ] },                        // |
        { "mou",        "mouclass.pdb",                 loader_groups[ 3 ] },                        // |
        { "kbd",        "kbdclass.pdb",                 loader_groups[ 4 ] },                        // |
        { "hid",        "hidclass.pdb",                 loader_groups[ 5 ] },                        // |
        { "ndis",       "ndis.pdb",                     loader_groups[ 6 ] },                        // |
        { "stor::ahci", "storahci.pdb",                 loader_groups[ 7 ] },                        // |
        { "stor::nvme", "stornvme.pdb",                 loader_groups[ 8 ] },                        // |
        { "stor::port", "storport.pdb",                 loader_groups[ 9 ] },                        // |
        { "scsi",       "scsiport.pdb",                 loader_groups[ 10 ] },                       // |
        { "ata",        "ataport.pdb",                  loader_groups[ 11 ] },                       // |
        { "atapi",      "atapi.pdb",                    loader_groups[ 12 ] },                       // |
        { "fltmgr",     "fltMgr.pdb",                   loader_groups[ 13 ] },                       // |
		  { "disk",       "disk.pdb",                     loader_groups[ 21 ] },                       // |

        { "afd",        "afd.pdb",                      loader_groups[ 15 ] },                       // |
        { "netio",      "netio.pdb",                    loader_groups[ 16 ] },                       // |
        { "tdi",        "tdi.pdb",                      loader_groups[ 17 ] },                       // |
        { "tcp",        "tcpip.pdb",                    loader_groups[ 18 ] },                       // |

        { "dxgk",       "dxgkrnl.pdb",                  loader_groups[ 19 ] },                       // |
		  { "dxgmms2",    "dxgmms2.pdb",                  loader_groups[ 20 ] },                       // |
		  { "dxgi",       "dxgi.pdb",                     loader_groups[ 22 ] },                       // |
		  { "ntdll",      "ntdll.pdb",                    loader_groups[ 23 ] },                       // |
                                                                                                     // |
        { "wdf",        "Wdf01000.pdb",                 {} },                                        // |
        { "win",        "combase.pdb",                  {} },                                        // |
    };
};

namespace std
{
    template<>
    struct hash<sdk::config::loader_group>
    {
        auto operator()( const sdk::config::loader_group& g ) const noexcept
        {
            return hash<size_t>{}( (size_t) &g.list );
        }
    };
};
