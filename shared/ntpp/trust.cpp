#if !__private_binary__ && not defined(NO_NTPP)
#include "trust.hpp"
#include "ntpp.hpp"
#include <execution>

#ifndef NTPP_NO_TRUST

// Basic authenticode implementation.
//
namespace ntpp::trust
{
	// Generates the PE hash as specified by the Authenticode specifications.
	//
	template<typename... H>
	FORCE_INLINE static bool pe_hash( const std::vector<uint8_t>& data, H&... hashes )
	{
		auto* img = ( win::image_x64_t* ) data.data();
		auto* nt_hdrs = img->get_nt_headers();

		bool invalid = false;
		auto hash = [ & ] ( any_ptr src, any_ptr dst )
		{
			if ( dst < src || dst >( data.data() + data.size() ) )
			{
				invalid = true;
				return;
			}
			( hashes.add_bytes( src, dst - src ), ... );
		};

		// Hash the image header from its base to immediately before the start of the checksum address.
		//
		hash(
			img,
			&nt_hdrs->optional_header.checksum
		);

		// Hash everything from the end of the checksum field to immediately before the start of the certificate table entry.
		//
		hash(
			std::next( &nt_hdrs->optional_header.checksum ),
			&nt_hdrs->optional_header.data_directories.security_directory
		);

		// Hash everything from the end of the certificate table entry to the end of the image headers.
		//
		hash(
			std::next( &nt_hdrs->optional_header.data_directories.security_directory ),
			xstd::ptr_at( img, nt_hdrs->optional_header.size_headers )
		);

		// Get a list of all sections, remove entries with no raw data and sort in ascending order.
		//
		std::vector<const win::section_header_t*> sections( nt_hdrs->file_header.num_sections );
		std::iota( sections.begin(), sections.end(), nt_hdrs->get_sections() );
		std::erase_if( sections, [ ] ( auto* scn ) { return scn->size_raw_data == 0; } );
		std::sort( sections.begin(), sections.end(), [ ] ( auto* a, auto* b ) { return a->ptr_raw_data < b->ptr_raw_data; } );

		// Hash all sections.
		//
		for ( auto& scn : sections )
		{
			hash(
				xstd::ptr_at( img, scn->ptr_raw_data ),
				xstd::ptr_at( img, scn->ptr_raw_data + scn->size_raw_data )
			);
		}

		// Hash if there's any data after the certificate table.
		//
		if ( auto* sec = img->get_directory( win::directory_entry_security ) )
		{
			hash(
				xstd::ptr_at( img, sec->rva + sec->size ),
				data.data() + data.size()
			);
		}
		return !invalid;
	}

	// Extracts Authenticode certificates from the binary.
	//
	void extract_certs( xstd::asn1::object* root, digital_signature* dst )
	{
		std::list<certificate>& cert_list = dst->cert_list;
		root->enumerate( [ & ] ( xstd::asn1::object* child )
		{
			certificate cert = {};

			// Find a node with a common name.
			//
			if ( !child->is_oid() || child->template as<xstd::oid>() != "2.5.4.3"_oid )
				return;

			// Find the attribute.
			//
			if ( !child->parent->is_sequence() || child->parent->children[ 0 ] != child || child->parent->children.size() != 2 || !child->parent->children[ 1 ]->is_string() )
				return;
			auto attrib = child->parent;
			if ( !attrib->children[ 1 ]->is_string() )
				return;
			cert.issued_to = attrib->children[ 1 ]->template as<std::string>();

			// Find the attribute set.
			//
			if ( !attrib->parent || !attrib->parent->is_set() )
				return;
			attrib = attrib->parent;
			if ( !attrib->parent || !attrib->parent->is_sequence() )
				return;
			attrib = attrib->parent;

			// Parent must be a sequence.
			//
			auto obj = attrib->parent;
			if ( !obj || !obj->is_sequence() )
				return;
			auto it = std::find_if( obj->children.begin(), obj->children.end(), [ & ] ( auto& r ) { return r == attrib; } );
			if ( it == obj->children.begin() )
				return;

			// Following this attribute set, there must be a sequence of two epochs.
			//
			auto& ts = *( it - 1 );
			if ( !ts->is_sequence() )
				return;
			if ( ts->children.size() != 2 )
				return;
			if ( !ts->children[ 0 ]->is_timepoint() || !ts->children[ 1 ]->is_timepoint() )
				return;
			cert.valid_from = ts->children[ 0 ]->template as<xstd::time::seconds>().count();
			cert.valid_until = ts->children[ 1 ]->template as<xstd::time::seconds>().count();

			// Previous to the epoch is the issuer.
			//
			if ( ( it - 1 ) == obj->children.begin() )
				return;
			auto& issuer = *( it - 2 );
			if ( !issuer->is_sequence() )
				return;
			for ( auto& el : *issuer )
				if ( el->is_set() )
					for ( auto& el2 : *el )
						if ( el2->is_sequence() && el2->children.size() == 2 && el2->children[ 0 ]->template as<xstd::oid>() == "2.5.4.3"_oid )
							cert.issued_by = el2->children[ 1 ]->template as<std::string>();

			// Find the EKUs.
			//
			obj->enumerate( [ &cert ] ( xstd::asn1::object* node )
			{
				if ( !cert.ekus.empty() )
					return;
				if ( !node->is_oid() || node->template as<xstd::oid>() != "2.5.29.37"_oid )
					return;
				auto& list = node->parent->children[ 1 ];
				list->enumerate( [ & ] ( xstd::asn1::object* eku )
				{
					if ( eku->is_oid() )
						cert.ekus.emplace_back( eku->template as<xstd::oid>() );
				} );
			} );
			cert_list.emplace_back( std::move( cert ) );
		} );

		// Save the corporation name for WHQL entries.
		//
		root->enumerate( [ & ] ( xstd::asn1::object* node )
		{
			if ( node->is_oid() && node->template as<xstd::oid>() == "1.3.6.1.4.1.311.2.1.12"_oid )
			{
				auto msg = node->parent;
				if ( msg->children.size() != 2 || !msg->children[ 1 ]->is_set() )
					return;
				msg = msg->children[ 1 ];
				if ( msg->children.size() != 1 || !msg->children[ 0 ]->is_sequence() )
					return;
				for ( auto& obj : *msg->children[ 0 ] )
				{
					if ( obj->tag_value.is_context_specific() && obj->tag_value.tag_number == 0 )
					{
						obj->children.front()->tag_value.tag_number = xstd::asn1::tag_bmp_string;
						dst->corporations.emplace( obj->children.front()->template as<std::string>() );
					}
				}
			}
		} );

		// Chain certificates.
		//
		while ( true )
		{
			std::erase_if( cert_list, [ ] ( auto& c ) { return c.issued_by == c.issued_to; } );

			bool modified = false;
			for ( auto it = cert_list.begin(); it != cert_list.end(); ++it )
			{
				auto it2 = std::find_if( cert_list.begin(), cert_list.end(), [ & ] ( const certificate& c )
				{
					return &c != &*it && c.issued_to == it->issued_by;
				} );
				if ( it2 == cert_list.end() )
				{
					std::shared_ptr<certificate> shared = {};
					for ( auto& entry : cert_list )
					{
						if ( &entry != &*it && entry.issued_by == it->issued_to )
						{
							if ( !shared )
								shared = std::make_shared<certificate>( *it );
							if ( !entry.chain || entry.chain->ekus.size() < it->ekus.size() )
								entry.chain = shared;
						}
					}
					if ( shared )
					{
						it = cert_list.erase( it );
						modified = true;
					}
				}
			}
			if ( !modified ) break;
		}
	}

	// Extracts the ASN1 object desciring the Authenticode state of the image from the PE file.
	//
	std::unique_ptr<xstd::asn1::object> extract_asn1( const std::vector<uint8_t>& data )
	{
		auto* img = ( win::image_x64_t* ) data.data();
		if ( auto sec_dir = img->get_directory( win::directory_entry_security ) )
		{
			auto sec = img->raw_to_ptr<win::security_directory_t>( sec_dir->rva );
			if ( sec_dir->size > sizeof( win::security_directory_t ) && sec->certificate_type == win::certificate_type_id::pkcs_signed_data )
				return xstd::asn1::decode( sec->raw_data, sec->length - sizeof( win::win_certificate_t ) );
		}
		return {};
	}

	// Parses a catalog file.
	//
	std::shared_ptr<catalog> parse_cat_file( const std::vector<uint8_t>& data ) {
		// Decode the data.
		//
		auto root = xstd::asn1::decode( data.data(), data.size() );
		if ( !root ) return nullptr;

		// Unwrap signedData type.
		//
		if ( root->children.size() != 2 )
			return nullptr;
		if ( !root->children[ 0 ]->is_oid() || root->children[ 0 ]->as<xstd::oid>() != "1.2.840.113549.1.7.2"_oid )
			return nullptr;
		if ( root->children[ 1 ]->tag_value.tag_number != 0 )
			return nullptr;
		auto signed_data = root->children[ 1 ];
		if ( signed_data->children.size() != 1 ) return nullptr;
		signed_data = signed_data->children[ 0 ];

		// signedData PKCS#7
		/*
		 * SignedData ::= SEQUENCE {
		 *	version Version,
		 *	digestAlgorithms DigestAlgorithmIdentifiers,
		 *	contentInfo ContentInfo,
		 *	certificates [0] IMPLICIT ExtendedCertificatesAndCertificates OPTIONAL,
		 *	crls [1] IMPLICIT CertificateRevocationLists OPTIONAL,
		 *	signerInfos SignerInfos
		 * }
		 */
		if ( !signed_data->is_sequence() ) return nullptr;
		if ( signed_data->children.size() < 4 ) return nullptr;
		// .version
		if ( !signed_data->children[ 0 ]->is_integer() || signed_data->children[ 0 ]->as<uint32_t>() != 1 ) return nullptr;
		// .digestAlgorithms
		if ( !signed_data->children[ 1 ]->is_set() ) return nullptr;
		// .certificates
		// .crls
		// .signerInfos
		xstd::asn1::object* content_info = signed_data->children[ 2 ];

		// Parse content info.
		//
		if ( content_info->children.size() != 2 ) return nullptr;
		auto content_info_inner = content_info->children[ 1 ];
		if ( content_info_inner->children.size() != 1 ) return nullptr;
		content_info_inner = content_info_inner->children[ 0 ];

		// Get full content hash for later verification.
		//
		std::string_view hash_message = content_info_inner->source.substr( content_info_inner->header_length );

		// Allocate the catalog.
		//
		auto result = std::make_shared<catalog>();

		// Find all spcPEImageData matches:
		//
		content_info_inner->enumerate( [ & ] ( xstd::asn1::object* obj )
		{
			// spcPEImageData:
			if ( obj->is_oid() && obj->template as<xstd::oid>() == "1.3.6.1.4.1.311.2.1.15"_oid )
			{
				auto signature = obj->parent->parent->children.back();
				if ( signature->children.size() == 2 &&
					  signature->children[ 0 ]->children.size() &&
					  signature->children[ 0 ]->children[ 0 ]->is_oid() &&
					  signature->children[ 1 ]->raw_data.size() != 0 )
				{
					if ( signature->children[ 0 ]->children[ 0 ]->template as<xstd::oid>() == "1.3.14.3.2.26"_oid &&
						  signature->children[ 1 ]->raw_data.size() == sizeof( xstd::sha1_t ) )
					{
						result->sha1_set.emplace( *( const xstd::sha1_t* ) signature->children[ 1 ]->raw_data.data() );
					}
					else if ( signature->children[ 0 ]->children[ 0 ]->template as<xstd::oid>() == "2.16.840.1.101.3.4.2.1"_oid &&
								 signature->children[ 1 ]->raw_data.size() == sizeof( xstd::sha256_t ) )
					{
						result->sha256_set.emplace( *( const xstd::sha256_t* ) signature->children[ 1 ]->raw_data.data() );
					}
				}
			}
		} );

		// If it does not sign any PE images, skip.
		//
		if ( result->sha1_set.empty() && result->sha256_set.empty() )
			return {};

		// Clear content info so iteration works.
		//
		content_info->children.clear();

		// Extract certificates.
		//
		extract_certs( signed_data, result.get() );
		if ( result->cert_list.empty() )
			return {};

		// Find and validate the message signature.
		//
		std::optional<xstd::sha1_t> sha1 = {};
		std::optional<xstd::sha256_t> sha256 = {};
		auto test_signature = [ & ] <typename T> ( const T & cert_sign, const T & img_sign )
		{
			if ( bool match = cert_sign == img_sign; match || std::holds_alternative<std::nullopt_t>( result->signature_digest ) )
			{
				result->signature_digest = img_sign;
				result->signature_match = match;
			}
		};
		result->signature_match = true;
		signed_data->enumerate( [ & ] ( xstd::asn1::object* obj )
		{
			if ( result->signature_match )
				return;
			// messageDigest, PKCS #9:
			//
			if ( obj->is_oid() && obj->template as<xstd::oid>() == "1.2.840.113549.1.9.4"_oid )
			{
				if ( obj->parent->is_sequence() && obj->parent->size() == 2 )
				{
					auto digest = obj->parent->children[ 1 ];
					for ( auto& c : digest->children )
					{
						if ( c->raw_data.size() == sizeof( xstd::sha256_t ) )
						{
							if ( !sha256 )
								sha256.emplace( xstd::make_hash<xstd::sha256>( hash_message ).digest() );
							test_signature( *( const xstd::sha256_t* ) c->raw_data.data(), sha256.value() );
						}
						else if ( c->raw_data.size() == sizeof( xstd::sha1_t ) )
						{
							if ( !sha1 )
								sha1.emplace( xstd::make_hash<xstd::sha1>( hash_message ).digest() );
							test_signature( *( const xstd::sha1_t* ) c->raw_data.data(), sha1.value() );
						}
					}
				}
			}
		} );
		return result;
	}

	// Parses a NT security section.
	//
	state parse_nt_secdir( const std::vector<uint8_t>& data )
	{
		state result = {};
		auto asn = extract_asn1( data );
		if ( !asn )
			return {};

		// Extract certificates.
		//
		extract_certs( asn.get(), &result );
		if ( result.cert_list.empty() )
			return {};

		// Find and validate the image signature.
		//
		std::optional<xstd::sha1_t> sha1 = {};
		std::optional<xstd::sha256_t> sha256 = {};
		auto test_signature = [ & ] <typename T> ( const T& cert_sign, const T& img_sign )
		{
			if ( bool match = cert_sign == img_sign; match || std::holds_alternative<std::nullopt_t>( result.signature_digest ) )
			{
				result.signature_digest = img_sign;
				result.signature_match = match;
			}
		};
		asn->enumerate( [ & ] ( auto* obj )
		{
			if ( result.signature_match )
				return;

			if ( obj->is_oid() )
			{
				if ( obj->template as<xstd::oid>() == "2.16.840.1.101.3.4.2.1"_oid )
				{
					if ( obj->parent->is_sequence() && obj->parent->parent )
					{
						auto algo = obj->parent->parent;
						if ( algo->children.size() == 2 && algo->children[ 0 ] == obj->parent && algo->children[ 1 ]->raw_data.size() == sizeof( xstd::sha256_t ) )
						{
							if ( !sha256 )
							{
								xstd::sha256 sha;
								pe_hash( data, sha );
								sha256.emplace( sha.digest() );
							}
							test_signature( *( const xstd::sha256_t* ) algo->children[ 1 ]->raw_data.data(), sha256.value() );
						}
					}
				}
				else if ( obj->template as<xstd::oid>() == "1.3.14.3.2.26"_oid )
				{
					if ( obj->parent->is_sequence() && obj->parent->parent )
					{
						auto algo = obj->parent->parent;
						if ( algo->children.size() == 2 && algo->children[ 0 ] == obj->parent && algo->children[ 1 ]->raw_data.size() == sizeof( xstd::sha1_t ) )
						{
							if ( !sha1 )
							{
								xstd::sha1 sha;
								pe_hash( data, sha );
								sha1.emplace( sha.digest() );
							}
							test_signature( *( const xstd::sha1_t* ) algo->children[ 1 ]->raw_data.data(), sha1.value() );
						}
					}
				}
			}
		} );
		return result;
	}
	// Mutex guarding catalog database.
	//
	static std::mutex g_catroot_mtx;

	// Loaded catalog files.
	//
	static std::unordered_map<std::wstring, int64_t> g_loaded_cats;

	// Map of hashes to relevant catalog files.
	//
	static std::unordered_map<xstd::sha1_t, std::shared_ptr<catalog>, impl::hashhash> g_sha1_cats;
	static std::unordered_map<xstd::sha256_t, std::shared_ptr<catalog>, impl::hashhash> g_sha256_cats;

	// Reloads the catalog list.
	//
	NO_INLINE void reload_cat_files()
	{
		// Get a list of catalog file paths.
		//
		std::vector<std::wstring> list;
		constexpr std::wstring_view catroot = L"\\systemroot\\system32\\catroot\\";
		ntpp::enum_directory( catroot, [ & ] ( std::wstring_view dirname, win::file_both_dir_information_t* fi )
		{
			if ( fi->file_attributes & FILE_ATTRIBUTE_DIRECTORY )
			{
				std::wstring dirpath{ catroot };
				dirpath += dirname;
				dirpath += '\\';

				ntpp::enum_directory( dirpath, [ & ] ( std::wstring_view filename, win::file_both_dir_information_t* fi )
				{
					if ( fi->allocation_size )
					{
						std::wstring filepath{ dirpath };
						filepath += filename;

						std::lock_guard _g{ g_catroot_mtx };
						auto [it, inserted] = g_loaded_cats.emplace( filepath, 0ull );
						if ( std::exchange( it->second, fi->last_write_time ) != fi->last_write_time || inserted )
							list.emplace_back( std::move( filepath ) );
					}
				} );
			}
		} );

		// Parse each catalog file.
		//
		std::for_each( std::execution::par_unseq, list.begin(), list.end(), [ ] ( std::wstring_view path )
		{
			if ( auto catr = parse_cat_file( ntpp::read_file( path ).value_or( {} ) ); catr && catr->signature_match )
			{
				std::lock_guard _g{ g_catroot_mtx };
				for ( auto& hash : catr->sha1_set )
				{
					auto [it, inserted] = g_sha1_cats.emplace( hash, catr );
					if ( !inserted ) it->second->combine( *catr );
				}
				for ( auto& hash : catr->sha256_set )
				{
					auto [it, inserted] = g_sha256_cats.emplace( hash, catr );
					if ( !inserted ) it->second->combine( *catr );
				}
			}
		} );
	}

	// Looks-up a catalog file given the two hashes for the digest.
	//
	std::shared_ptr<catalog> lookup_cats( const xstd::sha1_t& s1, const xstd::sha256_t& s256 )
	{
		// Lookup both maps, return if there is a match.
		//
		{
			std::lock_guard _g{ g_catroot_mtx };
			if ( auto it = g_sha1_cats.find( s1 ); it != g_sha1_cats.end() )
				return it->second;
			if ( auto it = g_sha256_cats.find( s256 ); it != g_sha256_cats.end() )
				return it->second;
		}

		// Try reloading catalog files.
		//
		reload_cat_files();

		// Try one more time, else return nullptr.
		//
		{
			std::lock_guard _g{ g_catroot_mtx };
			if ( auto it = g_sha1_cats.find( s1 ); it != g_sha1_cats.end() )
				return it->second;
			if ( auto it = g_sha256_cats.find( s256 ); it != g_sha256_cats.end() )
				return it->second;
		}
		return nullptr;
	}

	// Handles complete verification of a NT image.
	//
	state verify( const std::vector<uint8_t>& data )
	{
		// Parse embedded signature, if not present or invalid:
		//
		auto result = parse_nt_secdir( data );
		if ( result.cert_list.empty() || !result.signature_match ) [[unlikely]]
		{
			// Try matching a catalog file.
			//
			xstd::sha1 s1;
			xstd::sha256 s256;
			pe_hash( data, s1, s256 );
			if ( auto cat = lookup_cats( s1.digest(), s256.digest() ) )
			{
				std::lock_guard _g{ g_catroot_mtx };
				result.combine( *cat );
				if ( result.signature_match )
					result.cat_signed = true;
			}
		}
		return result;
	}
};
#endif
#endif