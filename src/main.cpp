#include  <sleepy_discord/sleepy_discord.h>
#include <sleepy_discord/websocketpp_websocket.h>

#include <memory>

class DiscordRoyalClient : public SleepyDiscord::DiscordClient
{
public:
    /* Calls the default constructor.. This was outlined in the documentation. */
    using SleepyDiscord::DiscordClient::DiscordClient;

    DiscordRoyalClient() { };


    ~DiscordRoyalClient() {};

};

int main()
{

    return 0;
}