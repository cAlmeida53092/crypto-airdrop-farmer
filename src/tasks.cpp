// tasks.cpp — part of crypto-airdrop-farmer.

#include "cryptoairdropfarmer/tasks.h"

#include <cstdio>

namespace cryptoairdropfarmer {

Tasks::Tasks(const std::string& config_path)
    : config_path_(config_path) {}

void Tasks::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Tasks::run() {
    if (verbose_) std::fprintf(stderr, "[crypto-airdrop-farmer] tasks: run\n");
    // core logic lives here
    return true;
}

}  // namespace cryptoairdropfarmer
