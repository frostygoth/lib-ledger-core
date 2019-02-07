// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_script.djinni

#ifndef DJINNI_GENERATED_BITCOINLIKESCRIPT_HPP
#define DJINNI_GENERATED_BITCOINLIKESCRIPT_HPP

#include <cstdint>
#include <memory>
#include <string>
#include <vector>
#ifndef LIBCORE_EXPORT
    #if defined(_MSC_VER)
       #include <libcore_export.h>
    #else
       #define LIBCORE_EXPORT
    #endif
#endif

namespace ledger { namespace core { namespace api {

class BitcoinLikeScriptChunk;

/** A general purpose script. */
class LIBCORE_EXPORT BitcoinLikeScript {
public:
    virtual ~BitcoinLikeScript() {}

    /**
     * Get the head of the script. Scripts are organized by chunks, so you get an iterator-like
     * interface.
     */
    virtual std::shared_ptr<BitcoinLikeScriptChunk> head() = 0;

    /** Turn the script into a string representation. */
    virtual std::string toString() = 0;

    /** Parse data into a script. */
    static std::shared_ptr<BitcoinLikeScript> parse(const std::vector<uint8_t> & data);
};

} } }  // namespace ledger::core::api
#endif //DJINNI_GENERATED_BITCOINLIKESCRIPT_HPP
