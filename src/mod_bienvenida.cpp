#include "ScriptMgr.h"
#include "ScriptedGossip.h"
#include "Player.h"

#define MENU_ID 123

class mod_bienvenida : public PlayerScript
{
public: 
    mod_bienvenida() : PlayerScript("mod_bienvenida") {}

    void OnPlayerLogin(Player* player) override
    {
        player->PlayerTalkClass->ClearMenus();
        AddGossipItemFor(player, 4, " |TInterface\\glues\\common\\GLUES-WOW-WOTLkLOGO:80:150:-15|t", GOSSIP_SENDER_MAIN, 999);
        AddGossipItemFor(player, 9, " |cFF8B0000BIENVENIDOS A Rexol WOW", GOSSIP_SENDER_MAIN, 999);
        AddGossipItemFor(player, 4, " |cFF8B0000---------------------------------------", GOSSIP_SENDER_MAIN, 999);
        AddGossipItemFor(player, 9, " |cFF9400D3Recuerde cumplir con las normas establecidas", GOSSIP_SENDER_MAIN, 999);
        AddGossipItemFor(player, 9, " |cFF9400D3El servidor consta con:", GOSSIP_SENDER_MAIN, 999);
        AddGossipItemFor(player, 6, " |cFF9400D3Anti Farming", GOSSIP_SENDER_MAIN, 999);
        AddGossipItemFor(player, 6, " |cFF9400D3Rates de experiencia x1", GOSSIP_SENDER_MAIN, 999);
        AddGossipItemFor(player, 6, " |cFF9400D3Rates de profesiones x1", GOSSIP_SENDER_MAIN, 999);
        AddGossipItemFor(player, 6, " |cFF9400D3Contenido Blizzlike", GOSSIP_SENDER_MAIN, 999);
        AddGossipItemFor(player, 6, " |cFF9400D3Crossfaction PvP y PvE", GOSSIP_SENDER_MAIN, 999);
        AddGossipItemFor(player, 6, " |cFF9400D3Bandas y Mazmorras parche 3.3.5a funcionales", GOSSIP_SENDER_MAIN, 999);
        AddGossipItemFor(player, 6, " |cFF8B0000---------------------------------------", GOSSIP_SENDER_MAIN, 999);
        AddGossipItemFor(player, 9, " |cFF006400Anticheat On |cFF8B0000| |cFF006400Secure System On", GOSSIP_SENDER_MAIN, 999);

        player->PlayerTalkClass->GetGossipMenu().SetMenuId(MENU_ID);
        SendGossipMenuFor(player, 123, player->GetGUID());
    }
};

void AddmodbienvenidaScripts()
{
	new mod_bienvenida();
}