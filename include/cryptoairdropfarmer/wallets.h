// wallets — part of crypto-airdrop-farmer.

#pragma once

#include <string>
#include <vector>

namespace cryptoairdropfarmer {

class Wallets {
public:
    explicit Wallets(const std::string& config_path);

    void configure(const std::string& key, const std::string& value);
    bool run();
    bool verbose() const { return verbose_; }

private:
    std::string config_path_;
    bool verbose_ = false;
};

}  // namespace cryptoairdropfarmer
