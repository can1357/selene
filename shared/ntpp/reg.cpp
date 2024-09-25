#if !__private_binary__ && not defined(NO_NTPP)
#include "reg.hpp"

namespace ntpp
{
	// Creates/Opens a key, similar to emplace/find, [handle, inserted] / [handle].
	//
	nt::result<std::pair<unique_handle, bool>> create_key( const nt::unicode_view& name, uint32_t access, uint32_t options )
	{
		scope_mode _p{};
		scope_registry_lock _g{};

		uint32_t disp = 0;

		nt::object_attributes_t attributes = {};
		attributes.length = sizeof( nt::object_attributes_t );
		attributes.object_name = ( nt::unicode_view* ) &name;
		attributes.attributes = OBJ_CASE_INSENSITIVE | default_attributes;

		nt::result<std::pair<unique_handle, bool>> result;

		if constexpr ( is_kernel_mode() )
		{
			result.status = cm::create_key(
				&result.result.emplace().first.handle,
				access,
				&attributes,
				0ull,
				nullptr,
				options,
				&disp,
				nullptr
			);
		}
		else
		{
			result.status = os::create_key(
				&result.result.emplace().first.handle,
				access,
				&attributes,
				0,
				nullptr,
				options,
				&disp
			);
		}
		
		if ( result )
			result->second = disp == REG_CREATED_NEW_KEY;
		return result;
	}
	nt::result<unique_handle> open_key( const nt::unicode_view& name, uint32_t access )
	{
		scope_mode _p{};
		scope_registry_lock _g{};

		nt::object_attributes_t attributes = {};
		attributes.length = sizeof( nt::object_attributes_t );
		attributes.object_name = ( nt::unicode_view* ) &name;
		attributes.attributes = OBJ_CASE_INSENSITIVE | default_attributes;

		nt::result<unique_handle> result;

		if constexpr ( is_kernel_mode() )
		{
			result.status = cm::open_key(
				&result.result.emplace().handle,
				access,
				&attributes,
				0ull,
				nullptr
			);
		}
		else
		{
			result.status = os::open_key_ex(
				&result.result.emplace().handle,
				access,
				&attributes,
				0ull
			);
		}
		return result;
	}

	// Key/Value deletion.
	//
	nt::result<> delete_key( void* handle )
	{
		scope_mode _p{};
		scope_registry_lock _g{};
		return ( nt::status ) os::delete_key( handle );
	}
	nt::result<> delete_key_value( void* handle, const nt::unicode_view& subkey )
	{
		scope_mode _p{};
		scope_registry_lock _g{};
		return ( nt::status ) os::delete_value_key( handle, ( nt::unicode_view* ) &subkey );
	}

	// Key value setter and misc APIs.
	//
	nt::result<> set_key_value( void* key, const nt::unicode_view& subkey, uint32_t type, const void* data, size_t length )
	{
		scope_mode _p{};
		scope_registry_lock _g{};
		return ( nt::status ) os::set_value_key( key, ( nt::unicode_view* ) &subkey, 0ull, type, ( void* ) data, length );
	}
	nt::result<> flush_key( void* handle )
	{
		scope_mode _p{};
		nt::status status = ( int32_t ) os::flush_key( handle );
		return status;
	}

	// Environment value getters.
	//
	std::optional<std::wstring> get_cenv( std::wstring_view user_sid, xstd::ahash_t variable_hash )
	{
		auto get_entry = [ ] ( std::wstring_view key, std::wstring_view val ) -> std::wstring
		{
			auto version_list = ntpp::open_key( key );
			if ( !version_list )
				return {};
			return ntpp::reg_type<REG_SZ>::read( version_list->get(), val ).value_or( {} );
		};
		switch ( variable_hash )
		{
			case "UserName"_ahash:
			case "UserProfile"_ahash:
			{
				// Resolve the profile path from the hive file.
				//
				bool is_username = variable_hash == "UserName"_ahash;
				auto hive_list = ntpp::open_key( L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\hivelist" );
				if ( !hive_list )
					return is_username ? L"SYSTEM" : L"";
				auto res = ntpp::reg_type<REG_SZ>::read( hive_list->get(), L"\\Registry\\User\\"s += user_sid );
				if ( !res )
					return is_username ? L"SYSTEM" : L"";
				if ( !xstd::iends_with( res.value(), "\\ntuser.dat" ) )
					return is_username ? L"SYSTEM" : L"";
				res->erase( res->end() - xstd::strlen( "\\ntuser.dat" ), res->end() );

				// Resolve the username.
				//
				auto it = res->rfind( '\\' );
				std::wstring_view username;
				if ( it != std::string::npos )
					username = { res->data() + it + 1, res->data() + res->size() };
				else
					username = *res;

				// If username, return.
				//
				if ( is_username )
					return std::wstring{ username };

				// Return the NT path.
				//
				return std::move( res ).value();
			}
			case "HomeDrive"_ahash:
			case "SystemDrive"_ahash:
			{
				return std::wstring{ &ke::get_user_shared_data()->nt_system_root[ 0 ], &ke::get_user_shared_data()->nt_system_root[ 2 ] };
			}
			case "SystemRoot"_ahash:
			{
				return &ke::get_user_shared_data()->nt_system_root[ 0 ];
			}
			case "AppData"_ahash:
			{
				auto shell_folders = ntpp::open_key( ( L"\\Registry\\User\\"s += user_sid ) + L"\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\User Shell Folders" );
				if ( !shell_folders )
					return std::wstring{};
				return ntpp::reg_type<REG_SZ>::read( shell_folders->get(), L"AppData" ).value_or( {} );
			}
			case "LocalAppData"_ahash:
			{
				auto shell_folders = ntpp::open_key( ( L"\\Registry\\User\\"s += user_sid ) + L"\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\User Shell Folders" );
				if ( !shell_folders )
					return std::wstring{};
				return ntpp::reg_type<REG_SZ>::read( shell_folders->get(), L"Local AppData" ).value_or( {} );
			}
			case "AllUsersProfile"_ahash:
			case "ProgramData"_ahash:
				return get_entry( L"\\Registry\\Machine\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\ProfileList", L"ProgramData" );
			case "CommonProgramFiles"_ahash:
				return get_entry( L"\\Registry\\Machine\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion", L"CommonFilesDir" );
			case "CommonProgramFiles(x86)"_ahash:
				return get_entry( L"\\Registry\\Machine\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion", L"CommonFilesDir (x86)" );
			case "CommonProgramW6432"_ahash:
				return get_entry( L"\\Registry\\Machine\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion", L"CommonW6432Dir" );
			case "ProgramFiles"_ahash:
				return get_entry( L"\\Registry\\Machine\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion", L"ProgramFilesDir" );
			case "ProgramFiles(x86)"_ahash:
				return get_entry( L"\\Registry\\Machine\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion", L"ProgramFilesDir (x86)" );
			case "ProgramW6432"_ahash:
				return get_entry( L"\\Registry\\Machine\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion", L"ProgramW6432Dir" );
			case "Public"_ahash:
				return get_entry( L"\\Registry\\Machine\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\ProfileList", L"Public" );
			default:
				return std::nullopt;
		}
	}
	std::optional<std::wstring> get_env( std::wstring_view user_sid, std::wstring_view variable )
	{
		// Handle known variables.
		//
		auto variable_hash = xstd::make_ahash( variable );
		if ( auto result = get_cenv( user_sid, variable_hash ) )
			return result;

		// Parse generic variables.
		//
		auto user_env = ntpp::open_key( ( L"\\Registry\\User\\"s += user_sid ) + L"\\Environment" );
		auto session_env = ntpp::open_key( L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\Session Manager\\Environment" );
		if ( session_env )
		{
			if ( auto res = ntpp::reg_type<REG_SZ>::read( session_env->get(), variable ) )
			{
				if ( variable_hash == "Path"_ihash )
				{
					if ( user_env )
					{
						if ( auto res2 = ntpp::reg_type<REG_SZ>::read( user_env->get(), variable ) )
							res.value() += L";" + std::move( res2 ).value();
					}
				}
				return std::move( res ).value();
			}
		}
		if ( user_env )
		{
			if ( auto res = ntpp::reg_type<REG_SZ>::read( user_env->get(), variable ) )
				return std::move( res ).value();
		}
		return std::nullopt;
	}

	// Expands the environment variables in the given string.
	//
	std::wstring expand_env( std::wstring_view sid, std::wstring str )
	{
		// Exhaust all environment variables.
		//
		size_t offset = 0;
		while ( true )
		{
			// Find the environment variable prefix, if none found we're done, return.
			//
			auto it = str.find( '%', offset );
			if ( it == std::string::npos )
				break;

			// Find the terminator, if we couldn't find it, stop parsing.
			//
			auto it2 = str.find( '%', it + 1 );
			if ( it2 == std::string::npos )
				return str;

			// Handle variable.
			//
			std::wstring_view variable = { str.begin() + it + 1, str.begin() + it2 };
			auto substitute = [ & ] ( std::wstring_view val ) FORCE_INLINE
			{
				str.erase( it, ( it2 + 1 ) - it );
				str.insert( it, val );
			};
			if ( variable.empty() )
			{
				substitute( L"%" );
			}
			else if ( auto res = get_env( sid, variable ) )
			{
				substitute( std::move( res ).value() );
			}
			else
			{
				offset = it2 + 1;
			}
		}
		return str;
	}
};
#endif