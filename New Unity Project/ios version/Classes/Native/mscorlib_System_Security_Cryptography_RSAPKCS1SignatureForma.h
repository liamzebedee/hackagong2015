#pragma once
#include <stdint.h>
// System.Security.Cryptography.RSA
struct RSA_t744;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t735;
// System.Security.Cryptography.AsymmetricSignatureFormatter
#include "mscorlib_System_Security_Cryptography_AsymmetricSignatureFor.h"
// System.Security.Cryptography.RSAPKCS1SignatureFormatter
struct  RSAPKCS1SignatureFormatter_t1521  : public AsymmetricSignatureFormatter_t810
{
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAPKCS1SignatureFormatter::rsa
	RSA_t744 * ___rsa_0;
	// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.RSAPKCS1SignatureFormatter::hash
	HashAlgorithm_t735 * ___hash_1;
};
