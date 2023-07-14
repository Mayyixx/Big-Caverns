# General game Areas / Level progression 

## Areas

| Name of the Area | Required levels | Ores                  | NPCs in the area     | Under-Areas | Shops | Abbreviation  |
|----------------|----------------|------------------------------------|---------------------|-|-|-|
| Upper Mines    | None          | Coal                               | Lazy Miner          | None | None | UM |
| Medium Caves   | Level 5        | Iron                               | Ben                 | None | None | MC |
| Lower Mines    | Level 20       | Lapis, Lead, Gold, Copper          | Bibow, Karim, Faeke, Bobby | None | Trainway Shop | LM |
| Knight's Shaft | Level 55       | Voir document Knight's Shaft       | Harry, Olaf, Matt, Luke, Harald, Larry, Arthur, Gauvain, Yvain, Perceval, Magnus, The Historian, Fuze, Miklós | Way too much | King's Shop | KS |
| Deep Den       | Level 125 + T4 | Foodium, Paladium, Hardened Stone  | Rick, Morty, Food         | None | None | DD |
| Hell Quarry    | Level 155 + T6 | Obsidian, Luminite, Quartz, Basalt | dunno              | Basalt Valley, Quartz Veins, Obsidian Corridor, Luminite Shafts | None | HQ |

Note: The indications Tx (Tier [x]) represent the Heart of the Mountain required Tier.

## Levels

  The following table describes the four main ways of increasing the xpmax, the fourth one being irregular
  
*Note: x = xpmax, y = level, z = new xpmax, a = xpmax coefficient*

| Formula | Description | Notes | Effect / Problem | Reset ? |
|-|-|-|-|-|
| z = x * 2 | The xpmax is multiplied by 2 per level. | This formula is used in Placeholder. | Too much xp to farm | No |
| z = x + 5 | Adds 5 to the xpmax per level. | This formula was used by Big Caverns v1 | Not enough xp to farm | Yes |
| z = x + (x - y) / 2 | The xpmax is doubled and adds the half of xpmax - level | This formula was used by Big Caverns v2 at the beginning. | Too hard to calculate + too much xp to farm | Yes |
| z = x + a | Adds the xpmax coefficient to the xpmax per level | This formula is the one currently used in Big Caverns v2. | Perfect | Yes |

Note that the second formula is the same than the fourth one, but with a regular coefficient which is 5.

Here is the table of the xpmax coefficient for the fourth formula, changing when you first discover a new area.

| Area | Xpmax Coefficient |
|-|-|
| Upper Mines | 10 |
| Medium Caves | 20 |
| Lower Mines | 30 |
| Knight's Shaft | 500 |
| Deep Den | 10000 |
| Hell Quarry | 11000 |
