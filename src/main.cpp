// main.cpp — entry point. Wires config and subsystems together.

#include "cryptoairdropfarmer/settings.h"
#include "cryptoairdropfarmer/wallets.h"
#include "cryptoairdropfarmer/tasks.h"
#include "cryptoairdropfarmer/alerts.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    cryptoairdropfarmer::Settings settings = cryptoairdropfarmer::Settings::load_default();
    cryptoairdropfarmer::Wallets wallets(settings.store_path);
    cryptoairdropfarmer::Tasks tasks(settings.store_path);
    cryptoairdropfarmer::Alerts alerts(settings.store_path);
    std::fprintf(stderr, "[crypto-airdrop-farmer] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
