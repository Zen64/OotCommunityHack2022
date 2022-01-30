#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "test2_ocean_scene.h"

#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"

SCmdBase test2_ocean_scene_header00[] = {
	SCENE_CMD_SOUND_SETTINGS(0x00, 0x00, 0x02),
	SCENE_CMD_ROOM_LIST(2, &test2_ocean_scene_roomList),
	SCENE_CMD_TRANSITION_ACTOR_LIST(1, &test2_ocean_scene_header00_transitionActors),
	SCENE_CMD_MISC_SETTINGS(0x00, 0x00),
	SCENE_CMD_COL_HEADER(&test2_ocean_collisionHeader),
	SCENE_CMD_ENTRANCE_LIST(&test2_ocean_scene_header00_entranceList),
	SCENE_CMD_SPECIAL_FILES(0x00, 0x0002),
	SCENE_CMD_SPAWN_LIST(1, &test2_ocean_scene_header00_startPositionList),
	SCENE_CMD_SKYBOX_SETTINGS(0x01, 0x00, 0x00),
	SCENE_CMD_ENV_LIGHT_SETTINGS(4, &test2_ocean_scene_header00_lightSettings),
	SCENE_CMD_END(),
};

ActorEntry test2_ocean_scene_header00_startPositionList[] = {
	{ ACTOR_PLAYER, 0, -120, 0, 0, 0, 0, 0x0FFF },
};

TransitionActorEntry test2_ocean_scene_header00_transitionActors[1] = {
	{ 0, 0xFF, 1, 0xFF, ACTOR_EN_DOOR, -270, 51, -586, 32768, 0x0000 },
};

// Dummy room list
RomFile test2_ocean_scene_roomList[] = {
	{0, 0},
	{0, 0},
};

EntranceEntry test2_ocean_scene_header00_entranceList[] = {
	{ 0, 0 },
};

LightSettings test2_ocean_scene_header00_lightSettings[4] = {
	{ 0x46, 0x2D, 0x39, 0x49, 0x49, 0x49, 0xB4, 0x9A, 0x8A, 0xB7, 0xB7, 0xB7, 0x14, 0x14, 0x3C, 0x8C, 0x78, 0x64, 0x07E1, 0x3200 },
	{ 0x69, 0x5A, 0x5A, 0x49, 0x49, 0x49, 0xFF, 0xFF, 0xF0, 0xB7, 0xB7, 0xB7, 0x32, 0x32, 0x5A, 0x64, 0x64, 0x78, 0x07E4, 0x3200 },
	{ 0x78, 0x5A, 0x00, 0x49, 0x49, 0x49, 0xFA, 0x87, 0x32, 0xB7, 0xB7, 0xB7, 0x1E, 0x1E, 0x3C, 0x78, 0x46, 0x32, 0x07E3, 0x3200 },
	{ 0x28, 0x46, 0x64, 0x49, 0x49, 0x49, 0x14, 0x14, 0x23, 0xB7, 0xB7, 0xB7, 0x32, 0x32, 0x64, 0x00, 0x00, 0x1E, 0x07E0, 0x3200 },
};

u64 test2_ocean_dl__00016548_32x32_rgba16_rgba16[] = {
	0xcd19d51bd519d519, 0xd55bccd7c4d7c4d7, 0xbc97c497cd19cd19, 0xc4d9c497c4d9c4d9, 0xc4d9d55bdd9de59f, 0xede1fea7f665e5df, 0xe5e1e59de59dede1, 0xdd5de59fd519c4d9, 
	0xd519d519cd19c4d9, 0xc497bcd9c4d9cd19, 0xc4d9c4d9c4d7bc97, 0xc4d9cd19d55bd55b, 0xdd9fe59fe5e1ee23, 0xf623ee23ede1ede1, 0xe59de59ddd9ddd5d, 0xd51bd51bc4d9ccd9, 
	0xcd19c4d9cd19c4d9, 0xc4d9c4d7bc97c4d7, 0xc4d7c4d9cd19dd9d, 0xdd9ddd9ddd9de59f, 0xe59ff665fea7f665, 0xede1e5dfe59de59d, 0xdd5ddd5bdd5bd519, 0xc4d9ccd9d51bd51b, 
	0xccd9c4d7bc97bc97, 0xbc97ccd9cd19c4d9, 0xcd19cd19dd9ddd9d, 0xe59fe5dfe5e1f665, 0xfe65f623ede1ede1, 0xe59de59ddd5ddd5b, 0xd51bd519cd19cd1b, 0xcd1bd55bd55dcd1b, 
	0xc4d9c4d9cd19cd19, 0xcd19cd19d55bdd5d, 0xdd9ddd9ddd9de5df, 0xf623f663f623f623, 0xe5dfede1e5dfe59f, 0xdd5bd51bd519d519, 0xd51bc4d9ccd9cd1b, 0xd55dd55bcd1bcd19, 
	0xcd1bd51bcd1bd55b, 0xd51bdd9ddd9fe59f, 0xe5dfe5dff623fea7, 0xee21e5dfe59fe59f, 0xe59fe59fdd9ddd5d, 0xd519d519d519c4d7, 0xccd9ccd9cd1bd51b, 0xcd1bd51bcd1bcd19, 
	0xd55bd51be5dfd55b, 0xe5dfe5e1e5dfe5df, 0xede1ede1f665ede1, 0xdd5bdd9de59ddd9d, 0xdd5ddd5ddd5bd55b, 0xcd19ccd9c4d9cd19, 0xc51bcd1bd55dd51b, 0xd51bd55dd55bd51b, 
	0xdd9fe5e1dd5dede1, 0xede1ede1ede1f623, 0xe5dfede1e5dfe59d, 0xdd9ddd5bdd5bdd5b, 0xdd5ddd5bd51bcd19, 0xc4d9cd19cd19cd1b, 0xcd1bcd19d51bd55b, 0xd55bdd5dd55bdd5d, 
	0xede1e59fe5dfe5df, 0xee23ee21e59fdd9d, 0xe59ddd9ddd5bd519, 0xd519d55bd55bd55b, 0xd519cd19cd1bcd1b, 0xcd1bcd1bd51bd51b, 0xd55ddd5dd55bd51b, 0xe59dede1ee23ee21, 
	0xf623f623f623ede1, 0xe59ddd5ddd5bdd5b, 0xdd5bdd5bd519d51b, 0xd55bd55bd51bcd19, 0xcd1bcd1bcd1bcd1b, 0xd55bd55bd55bdd5d, 0xdd5bdd5de59de5df, 0xede1f623f663fea5, 
	0xe59fe59ddd5ddd5d, 0xdd5bd55bd55bd55b, 0xd55bd519d51bcd19, 0xcd1bd51bcd1bcd1b, 0xd51bd55ddd5ddd5d, 0xdd5ddd5ddd9ddd9d, 0xe59de59deddff663, 0xfea7fea7ee21fea5, 
	0xdd5bd51bd55bd55b, 0xd55bd55bd51bd519, 0xccd7cd19cd1bcd1b, 0xcd1bcd1bd51bd55d, 0xdd9ddd5ddd5ddd5d, 0xdd5dd55bd55beddf, 0xfea7fea7f665ede1, 0xf623e5dfe59fdd5d, 
	0xd51bcd1bd55bd55b, 0xd51bd51bd55bd55b, 0xcd1bcd1bcd1bcd1b, 0xd55ddd5ddd5ddd5d, 0xdd5ddd5ddd9deddf, 0xe59fede1fea7f623, 0xede1ede1dd9de59d, 0xe59dd51bccd9ccd9, 
	0xd51bd51bd51bcd1b, 0xccdbc4dbcd1bcd1b, 0xcd1bd51bd51bcd1b, 0xd55bdd5ddd9de59f, 0xeddfede1ede1f663, 0xfea7fea5fe65eddf, 0xe59fdd5dd51bcd1b, 0xccd9c4d7c4d7cd19, 
	0xcd19c4d9c4dbc51b, 0xc51bcd1bcd19ccd9, 0xd55de59fdd5ddd5d, 0xe59dede1f623fea7, 0xfea7fea7fea7ede1, 0xd55bdd5bd51bd51b, 0xd519ccd9c4d9c4d7, 0xc4d9c4d9cd19cd19, 
	0xcd1bc51bcd1bcd1b, 0xd55ddd5de5dfe5df, 0xe59fe59dede1ee21, 0xfe65fea5fea7f665, 0xf663eddfd519d519, 0xd51bd519cd19ccd9, 0xc4d7c497c4d9c4d9, 0xcd19cd19d55bd51b, 
	0xd55ddd9de5dfe5df, 0xe5dfe59fede1ede1, 0xf623fea7fea7f665, 0xf663f623ee21d55b, 0xd51bd519d519d519, 0xcd19ccd9c4d9c497, 0xc497c4d9cd19cd19, 0xd519dd5dd55bdd5b, 
	0xede1ede1ee21ee21, 0xee21f623fea7fe67, 0xf623ede1ee21ede1, 0xe59ddd9ddd5dd51b, 0xd519d519ccd9ccd9, 0xc4d7c4d7c497ccd9, 0xcd19d519d51bdd5b, 0xd55bdd5be5dfe5df, 
	0xee21f623fe65f623, 0xf665f665ede1e5df, 0xee21e5dfdd9ddd9d, 0xdd5bd55bd519d519, 0xc4d9c4d7c4d7c4d9, 0xc4d9c4d9cd19cd19, 0xd519d55bd55bd55b, 0xe59fe5dfe5dfe5e1, 
	0xee23e59fe5e1e59f, 0xdd9fe59fe5dfdd5d, 0xdd5dd55bd519d519, 0xcd19ccd7c4d7c4d7, 0xc4d7c4d9c4d9ccd9, 0xcd19d519cd19d55b, 0xdd9dd55bede1e5df, 0xe5dfee23f623f665, 
	0xe5e1e59fdd9fdd9f, 0xd51bd55bd55bd51b, 0xd519d519cd19ccd7, 0xc497c497c497c4d7, 0xc4d9cd19d519d51b, 0xd55bd55bdd5bdd9d, 0xe59fdd9ddd9fede1, 0xf665f665f625ee23, 
	0xdd9dd55bd51bcd19, 0xd51bcd19cd19ccd9, 0xc4d7c497bc97bc97, 0xc4d9cd19cd19d51b, 0xdd5bdd9ddd5ddd9d, 0xdd5be5dfee21ede1, 0xee21f665f665f665, 0xfea7f665ede1e59f, 
	0xcd1bcd19ccd9bc97, 0xbc97bc95bc95c4d7, 0xc4d7c4d9ccd9cd1b, 0xd55bd55bdd5bdd9d, 0xe59ddd9de5dfee23, 0xee21ee21ee23fea7, 0xfee9fe67ee23ee23, 0xe5dfe59fdd9dd51b, 
	0xc4d7c4d7c4d7ccd9, 0xccd9c4d9c4d9c4d9, 0xcd19d51bd55be5df, 0xe59fe59fe5dfdd9d, 0xf665ede1f623fea5, 0xf665fee9fe65ede1, 0xe5e1e5dfe5dfe59f, 0xdd9fd55dcd1bbc95, 
	0xccd7cd19ccd9c4d9, 0xc4d7cd1bd55bdd5b, 0xdd5ddd9be59de5e1, 0xf623f665f665f665, 0xf665f663fe65f623, 0xee21e5dfe59fe5df, 0xe5dfdd9fd55bd55b, 0xc4d9c4d9c4d7cd19, 
	0xc4d9c4d9ccd9d55b, 0xdd5ddd9de59fe5df, 0xf623f663fe65fe65, 0xfea7fea7fea7f663, 0xe5dfeddfede1e59d, 0xdd9ddd9ddd9ddd5b, 0xd55bcd19c4d9c4d9, 0xcd19d519d55bcd1b, 
	0xe59fdd9ddd9de59f, 0xf623ede1f665fe65, 0xf663fea5f663fea7, 0xeddfe59fe5dfdd9d, 0xe59de59fdd9ddd5d, 0xdd5dd55bc4d7c4d7, 0xc4d7c497c4d9d519, 0xd55dd55bd55bdd5d, 
	0xe59ff623f623f665, 0xfea7fea7fea7f665, 0xfea7f623ee23eddf, 0xe5dfdd5bd55bd55b, 0xdd5bd55bd519d519, 0xccd7c497c4d7c4d7, 0xc4d9cd19d55bd55d, 0xd55bd55bdd9de5df, 
	0xf665fea7fe67f665, 0xf665f665ee21ee23, 0xe59fdd5ddd5bdd5b, 0xdd9de59dd519d519, 0xd519cd19cd19c4d7, 0xc497c4d7c4d9c4d7, 0xcd19d55dd55dd55d, 0xdd9de5dfee21f623, 
	0xfea5f663ede1ee23, 0xee23dd9ddd5dd55b, 0xd55bd55bd55bd519, 0xcd19ccd7c4d7c4d7, 0xc4d7c4d7c4d7c4d7, 0xc4d7ccd9ccd9cd1b, 0xd55ddd9de59dede1, 0xee23ee23f663fea9, 
	0xede1ede1e5dfe5df, 0xdd5dd55bd55bd55b, 0xd55bd51bcd19ccd7, 0xc4d7c4d7c4d7c4d7, 0xc4d7c497c497cd1b, 0xcd1bd55ddd9de59f, 0xede1ee21ee23ede1, 0xf667f665ee23f665, 
	0xe59fdd9de59dd55b, 0xd51bcd1bccd9c4d7, 0xc4d7c4d9c4d9ccd9, 0xccd9c4d9c4d7c497, 0xc4d9cd1bd51bd55b, 0xdd9de59df665ee23, 0xfea7f623ee23ee21, 0xe5dfe59fdd5bd55b, 
	
};

u64 test2_ocean_dl__0000DCE0_32x32_rgba16_rgba16[] = {
	0x73dbad6363555293, 0x5b55631963155b55, 0x94615a97ce319d63, 0xd671def7be69d6ad, 0xeef5be71d631a565, 0x9ca38c9d8c5d5ad5, 0x735b9c63952383df, 0x6b5994df6b597c5f, 
	0xb52b9461ada74b13, 0x52959c9d94e16ad7, 0x63178ce5a5e7d775, 0xa5a5a4dfb5a9c671, 0xb567ef77eef5b567, 0xad215ad5739b5b57, 0x841f739d7c1d841d, 0x63158be18ca5a4e1, 
	0x63597bdd941d6319, 0x63176bd984a362d5, 0x952394639ce17c5d, 0xceb5b56dcef1d6ef, 0xa565a5abdeaf84a1, 0xada79c5f62d5841f, 0x7bd9845f9ce75ad5, 0x9d2184638c61949d, 
	0x739b9d259cdf5a93, 0x841ba5238bdb5a93, 0xb4e57b5b9c9f9d63, 0xad6594df9c61df73, 0xbeabc62bb5698461, 0x9cdf8c1d6b197b57, 0xad657b9d52d38c63, 0x9525635583db6b5b, 
	0x9ca39ca19c63945d, 0x94e1631794df5b13, 0x946573db731783dd, 0xa4e7ad679463c671, 0x9523c6b1b5a5ace3, 0xad278ca18c6384e1, 0x9d237bd96b599d23, 0x7b9d6319841b6319, 
	0x6ad9a4a37b9b7bdd, 0x73d96bd9a5237be1, 0xbda763558be18423, 0x73dba4a37bdf7c5b, 0x745d9c618ce3a525, 0x9421ad2962d76b59, 0x7b9994638c1f7bdd, 0x94df5b176b9b8c5f, 
	0x6b598c5f6b5b945f, 0x7c63845b839d63d9, 0x5ad5945f5a555a93, 0x83dd6bdb6b198ce3, 0x9ca1bdeb83db6357, 0xb62bb62dadab9c9d, 0xa5259d6194df8c5f, 0x8bdd62d36b177c1d, 
	0xa4e362d56b158c5d, 0x9d6383db941f8c1d, 0x9c6573198ce17359, 0xa5638bdb83dd849f, 0xad279d25b5ebb66f, 0x8c5fbe2b9c618ce3, 0x741b8bdfa4e98ca1, 0x6319b5a9635562d3, 
	0x739ba56594df9d65, 0x739d6b9994e78c61, 0x8d21841b5ad383e1, 0x6bdbb5a78c61b5a7, 0x9cdf9cdf9d63b5ef, 0xc5e784e1ad69a565, 0xb4e36357a4e76357, 0x9525d6af945f7b99, 
	0x735d9d2195237399, 0x7357a4a56bdd8c1f, 0x9ce363177397a567, 0x8bdf6355841f7bdb, 0x94e5a5238c1dc5eb, 0x9ce1adab9ce3a4a3, 0x94639ce5bdef6355, 0x62d5ada9ad6794a1, 
	0x6317ace3ace5949f, 0x7b9952d59d2594a1, 0x94616b579c63ace3, 0x6355b5e5ad279c61, 0xa563ad27ce6b8c1f, 0xc62d8ce1de2fad27, 0x7bdd8bdb93df845b, 0xa4e5a5657c5d9c5f, 
	0xb5278c1b94df7bdb, 0x83db73df8c638c1f, 0x9ce36b5994a1841b, 0x73db7b57ada7adeb, 0x94a3c62dceafb627, 0x8c1bbde994e3c5ed, 0xc5ebad2995216ad7, 0xad69ad25bd298c59, 
	0x9d63946373dba4a1, 0x94e1735995219465, 0xd6718ca17bdd7397, 0x8cdf8c639d67a567, 0x9ce37bdba523b5ab, 0xc66b8c9f7bdbada5, 0x6b576359ace57bdb, 0x73db8cdf8ce19ce1, 
	0xb4e78c617bdb8bdf, 0x7c9f6399adabace7, 0x8c5fbde7735b83db, 0x94617b9d63178cdd, 0xada59ca16b197bdb, 0xcdad7399b5e97397, 0x8c1d94a56b9b9d23, 0xa563bda762d5a563, 
	0xadab841f7bdb6357, 0x9461a51fa563ada5, 0x9ca39463adadc5e9, 0xb5677bd97b17a52b, 0x6b1b8c1dbde79c5f, 0x94dfad27b5e7b567, 0xa56363597c5d7c19, 0x7b5995257bd75b19, 
	0x849d6bd98bdfad2b, 0x73d97359835b6359, 0xa4e1ada994e5b5ab, 0x6bd783db6bdd73db, 0x741dad67bd2573d9, 0x8c5ba5219ce36353, 0x6b576b5b62d994e3, 0xa56784218ce1841d, 
	0x7b579ca39c1f7c5d, 0x741d9ca17b996bd7, 0xade78c5fb5edb567, 0x9c5f8c616bd78c61, 0x7bdba5a573dd9da9, 0x94a38c5db5639c65, 0x8ce352d38c5f94e3, 0x6b5983d96b1762d7, 
	0x735b9d678ce1bda9, 0xad27b5e9a5e78419, 0x7bdd63557b57ad67, 0x735594637c1fa5e9, 0x9461b5678ca394e3, 0xa5637bdd9c5fa4a3, 0x5291735983597b5b, 0x9ca1b5a762d783db, 
	0x7b9fada9949d9ca1, 0x8bdf6b9b7bdf9da9, 0x73198cdf6b197b9d, 0x6b1bb4e78bdda525, 0xa567a5a58ce184df, 0x83ddada773dd6355, 0x735763134a916bdb, 0x7b59ad676b154ad3, 
	0x94e19ca194a1bd6d, 0xbd6b7bdb94616319, 0x94e38c5d5ad76319, 0x7bd97b998c65a567, 0xc6b1ce73bdedbdab, 0x9c5f845fa5a99c61, 0x6b9b5a915b118c5d, 0x5b137c1d7b576b99, 
	0x9d21d66bd6adadab, 0xa5a7a5659c637b99, 0x8c6194615b198cdf, 0x8423a4e59c5fa4e9, 0xdeb3bdeb9ce39ce1, 0xa5a79ce5845bb62b, 0x95219cdf945d9463, 0x5b138ce162d3a525, 
	0x8c9f6b5773557b5b, 0x8c2373d96bd99c63, 0x7b596395945fa527, 0x9da57c1bb5a7c62d, 0x9ce3839f8bdbad27, 0x8ce3b5ebc6afc62f, 0x7c5d83dd6b177bdd, 0x8c218bdb7b59735b, 
	0x6b9d839d9ceb941d, 0x7bdd9463bde78ce5, 0x7c1f8c1f7c1d9d23, 0xad678c5f8c5d83e1, 0xcdefb52b945fbd69, 0xb565d6f1ceefade7, 0x7bd7941d6b578c9f, 0x63557b999cdd6357, 
	0x8bdb6397ad256b97, 0xb56b9c1fb5677ca1, 0x8b9f7bdf9ce16b17, 0x9ca39d63c62b8c1d, 0x9d67d63194e3b5eb, 0x8c65a525c671ad65, 0x6b996b1963577359, 0x7c1d8c61ad6b9ca5, 
	0x94a37c6373597317, 0xa5298c1dada7c62f, 0x8ce37c619ca37b9b, 0x7bd7b4e37b9b945f, 0x849f94df845fc5ed, 0xb5ebd6f1adeddef1, 0x8ca39ca373578cdf, 0x8bdb739b94e18ce3, 
	0x6359a4a39cdf9ce5, 0x62d5a4e163596b57, 0x949f5ad38bdd5a95, 0x9ce5739d5b136357, 0x62d5845f6b977c5b, 0x9cdfce31eeb5ceb1, 0xada78c1da4e17bdd, 0x8c1d5b5994a1a563, 
	0x9c1fad6394a16b59, 0x62d5a5659ce37359, 0x949f84dd84a1739f, 0x5b137b5763197bd9, 0x73578bdd739bbde5, 0x9d659c619d21ce71, 0xcdef7b579ca57359, 0x73dd7b9b5b5973d9, 
	0x6b999c639c61a4e9, 0x8ca3a523b56d62d5, 0x731763579c9f9c9f, 0x841f8c618cdf6b17, 0x7c179cdf84618bdd, 0xd6ad9c63ade9be2d, 0xc6736355ad279c23, 0x7bd9a4a18ce173d7, 
	0x84616319a5235ad7, 0x8461841b5ad3741d, 0x7b9dad6983996bdb, 0x7c61b5277c1d8ca1, 0x9ce3946363998cdf, 0x9c5f9d2594dfa527, 0xbeb1b5e5b5ab9d25, 0x9ca1a5676397aca3, 
	0x9ce18c5f63196353, 0x94e173dba5279461, 0xbda99d65aca57bdf, 0x8ce38bddce2dad23, 0x8ce194df841b8463, 0xc5ab8c61bda9cef3, 0x8bdfbe2bd62fb527, 0xad23845d94e5b527, 
	0x8461c5ab631562d7, 0x73595b597bdbb5a9, 0x949f9c63845f8cdf, 0xa523845d9461ada9, 0xbdefa5279c61ae27, 0x949f7be38c1f8c1f, 0x9c61ce29a4e77bdf, 0x7bd76b159d219d65, 
	0x8c63941d428d5ad3, 0x525352915ad38ce3, 0xb5a5a527bde5a5a9, 0xc5afada98ca17c1b, 0x9d238c5db5a78c5d, 0xbd67ad277b57a569, 0x8ca3b5a79463bd69, 0x73dfad23945f949f, 
	
};

u64 test2_ocean_dl__0000FCE0_32x32_rgba16_rgba16[] = {
	0xd6a7cea7949b8c59, 0x73533145ad5fbde3, 0x949bb59fd6e96b11, 0x41cb6b0f8c15c621, 0x18831085424d1907, 0x5acf8c59d6e9d667, 0xc623c625e729e6eb, 0xbde3524d8415a51d, 
	0x9cdbd6e973935a8d, 0x62cf6b1194999d1d, 0xad5fb59fad5d8417, 0x4a09734f6b0fad5d, 0xdee97b9319075acd, 0xbe27cea9bde5b5a1, 0xa51da4dbce69ef6b, 0xe7297bd76b114a49, 
	0x4a4b7bd71085524b, 0x524b8c597353a561, 0xad619cdd94dd8417, 0x3985734f6b0f7bd1, 0x9cd9b5a110857393, 0x9d1fa55f9cdd9c97, 0xad5fbddfc625cea9, 0xe729528d21074a0b, 
	0x20c118831085524b, 0x630f630f8c5994db, 0xa51b94978c5741c7, 0x5a8b6b0b6acd5a89, 0x62cdc62341c78c57, 0x949d9cdd949b9c99, 0xad5f9cdbada1ce69, 0xce675acf31871085, 
	0x5acd5ad34a4d6b51, 0x6b5162cd8c5773d5, 0x739362cf5acd2105, 0x398762cd83d36b0d, 0x7b919cd94a09949b, 0x94dd949bad1b8c55, 0x9455b59fb59fc625, 0xa51d5a8d4a4bbde7, 
	0xb5a3a52173956b4f, 0x73d15acd4a0762cd, 0x5a8d39c552891085, 0x4a0752475a495a89, 0x7bd39497528b7bd5, 0x8459be25ad5fa4dd, 0x9c99bde3c6279d1f, 0x8c5b31459cdfce69, 
	0xc6659499528b4209, 0x7b9139c7528b4a49, 0x73d3528b18c33187, 0x4a4952495a8b8457, 0x949b9cdb4a495acd, 0x63117bd39497bde1, 0xc621be23a51b8457, 0x7c157bd7b5e3be25, 
	0xbde3bde19cdb2945, 0x2103528b31433183, 0x398518c318812905, 0x318731416b4f8413, 0xa51b41c541c5528d, 0x6bd7739373517bd5, 0x73517bd57bd55a8d, 0x7bd9ada5cea9c669, 
	0xb5a1bde394995a8d, 0x18c3290518c32105, 0x21076b53b5e5be27, 0x9ce14a094a076b0f, 0x7b4f394310858459, 0x8c9b7bd37bd38457, 0x7393a51f5acd6311, 0x9d1fcea9ad61be25, 
	0xa51db5a36b51630f, 0x1907210521054a4f, 0x8c9d9d1fada5be25, 0xcea9d6ed949b41c9, 0x19071085420b7393, 0x9d1d7c198c999d1f, 0x8c9b4209420bb5e7, 0xceabbe27a51fa51d, 
	0x7bd373914a4b3189, 0x19071085528f7bd7, 0xc6abbe25bde5b5e5, 0xbe29c629ceaf62d1, 0x1907190731894209, 0x42097bd57393630f, 0x398718819d61be27, 0xbde3be25b5a1a51d, 
	0x524b4a0941c92947, 0x21056311841bb5e7, 0xad63a55fbde5bde5, 0xb5a5be25d6edc669, 0x524b7393528d3187, 0x21076311528d1881, 0x18816b13a563bde5, 0xada3a5218c578c59, 
	0x5a8b6b4f420b2947, 0x10858c9bcea9ce69, 0xa561a51db5a3bde5, 0xbde5be27c629a51f, 0x7393ad5fbe259cdd, 0x9cdd7395528d20c1, 0x3987949b73917393, 0x630f7b9383d55a8b, 
	0x9c9bad5f83d53187, 0x39878c5ba561bde5, 0xada18c97a55fad9f, 0xada3841784159499, 0xa4d9bd9fc5e1c5e1, 0xa4d7a4dbc6257bd7, 0x3143949d949b7bd5, 0x84177b9362cd4a49, 
	0x738f734d94575a8d, 0x5acf7bd35acd528d, 0x8459630f420762cd, 0x6b516b117c19949b, 0x9c9bbd9fa4dbbde3, 0xbda1bde5ce25cea7, 0x62cd41c7a51fada3, 0xbde34a4918c34a09, 
	0x5acd5a8b52491085, 0x42094a49420941c7, 0x631162cd41c72945, 0x41c9528d84176b93, 0x62cdc5dfbd9dd665, 0xbd9fad5d83d18bd3, 0x5a89108539858457, 0x5acf20c129456b53, 
	0x18c3108529012903, 0x18834205528b4a49, 0x524b5acd4a094209, 0x6b518c99739339cb, 0x4a09a51d9457a4db, 0x7bd394598c178c17, 0x41c5108519072105, 0x4a097bd72903528b, 
	0x10856313ada3d6e9, 0x945b20c129017391, 0x6b117bd37c1773d3, 0x630f739310852947, 0x524994559c95630d, 0x734da51ba4d75a8b, 0x188518817395a51f, 0xbde5ef2939c72105, 
	0xa521ada17bd39cd9, 0xcea541c7108520c1, 0x9c9b4a074a49630d, 0x29011085108510c5, 0x4a078c15ad1da51f, 0x9499945994579499, 0x73938c59c667bde3, 0xa51dad5dad5f2105, 
	0xbde79cdd6b537395, 0x9cdfa56139871085, 0x1085108510851085, 0x108541cb31891085, 0x31454207a517bde1, 0xad19945383d17bd1, 0x630dad5fbde3ad5f, 0x8c5773519cdd41cb, 
	0x949b949b7c17b5e3, 0xbe25bde162cd3147, 0x39c97b93a51d8c59, 0x8c5962cf631131c9, 0x210529474209528d, 0x9c956b0d41c51885, 0x7bd5b5a3ad61ad5f, 0x9cd984159cdd5acf, 
	0x4a4bad5f94db5acd, 0x949b314331434a07, 0x7351b59db55dc621, 0xe6e5d6a39499524b, 0x1085108542094a4b, 0x5a8b20c118c3528d, 0xa55d9cdb9cdba51d, 0x73917bd1949b3185, 
	0x4a0b5a8d7c158c57, 0x7391188529015acb, 0x6b4f9cd79497b59b, 0xc61fd663bddf41c9, 0x190718c341c9be27, 0xd6ed7bd939c7c5e5, 0xbde5a51f9cddad5f, 0x8c598c179cdf6311, 
	0x41c720c118c118c3, 0x190710858c1583d3, 0x7bd37bd39cdba51d, 0x84138c15a4d962cf, 0x39c7c627c669cead, 0xdeedad613141ad5d, 0xb5a1b59f94578c15, 0xad5f949b8417ad5f, 
	0x10851085420b39cb, 0x3189318962c99495, 0x94977bd194558c53, 0x6b0d8c5583d34a49, 0x9d1f9d1db5e3b5e3, 0xc669bde55acf5249, 0x7bd37bd373938c59, 0x9499528b5acd8c57, 
	0x20c16b536b535acf, 0x4a8f424d528d8c57, 0xbde3b5a1735162cd, 0xad5b949752497bd7, 0xb5e594dd949d8c9b, 0x949bad5f7bd75a8b, 0x7b935a8b4a494207, 0x524931414a493145, 
	0x5a8ddee79cdd7395, 0x6b55318939858411, 0xbddfa51b7bd14a47, 0x630b734f41c79d21, 0xc6699cdf7c17a51f, 0x8c5bad61a51f3147, 0x5a8d7bd56b515acd, 0x62cd3985420718c3, 
	0xa51fd6a99cdd949b, 0x8419420921055a8b, 0x9457a51b8c1541c5, 0x5a8b528b5a8dada1, 0x9d1bada1a55fada1, 0xa55f949bb5e339c9, 0x4a4d5a8b52895a89, 0x5acd318518835a8d, 
	0xb5a1cea7c667ad5f, 0xad5f528b41c939c5, 0x4a0541c56b0b5a89, 0x524921058c997c15, 0x8c9bad6184598c9b, 0x8c597bd5a55f4209, 0x2989318952497bd3, 0x3103108518857bd7, 
	0xc667c667b5a1bde3, 0xb5a16b0f18852901, 0x4a494a4b4a4762cb, 0x41c721456b53949d, 0x841763117bd3a561, 0x841773937bd3630d, 0x2107190710851085, 0x210519077393a51f, 
	0xad618419c625be25, 0xb5e17bd110851085, 0x18c141c541c32943, 0x3145190739854a4d, 0x7bd573934a096b51, 0x8c597bd3630f7bd3, 0x18853145524b4209, 0x528d1085b55fc625, 
	0xbe25ce67c625be25, 0x9cdd314510856b55, 0x6b55631183d54a4d, 0x1085108519073189, 0x528d5acf6b535acd, 0x630f528b4a492901, 0x7bd5a51fb5a18417, 0x7b953947ad5dc625, 
	
};

u64 test2_ocean_dl__0000E4E0_32x32_rgba16_rgba16[] = {
	0x3359125312951253, 0x12554b9f335b0a95, 0x12d7541f7ce53b9d, 0x33191ad72b19335b, 0x3bdd5c614c214bdf, 0x1ad72b191a972b19, 0x2b1922d722d722d7, 0x2b19439d439f6461, 
	0x22d7125512950a95, 0x3b9f4c212b192b5b, 0x856bb66f7461335b, 0x12d51ad7335b4bdd, 0x43df339b43df5461, 0x2b1b335b2319335b, 0x22d70a512b192b19, 0x12952b192b19541f, 
	0x3b592b1b2b192ad9, 0x2b5b2b5b3be18dab, 0xa671952795ab84e5, 0x74a184e584e574e3, 0x64614c1f439d2b5b, 0x2ad92297331b4bdf, 0x33192b193b5b335b, 0x1a971255021122d5, 
	0x2b5b439d4c2143df, 0x2b5b2b5f95ed9569, 0x7ca553df6ca55c21, 0x53dd3b9b33593319, 0x4bdd5c5f541f439d, 0x2b190a5512553319, 0x3319335d2b191a95, 0x12530a5512951255, 
	0x2b5b4c218d69856b, 0x74e9a67184a32b19, 0x1ad7335b5c21541f, 0x3b9d335b12951295, 0x335b2b5b3b5b439b, 0x335b23171ad72297, 0x1a972ad933190a51, 0x01d1021312972b19, 
	0x4c23b6b3a671aef9, 0xd7777461339d3b9d, 0x2ad92b5933194bdd, 0x4bdf335b0a551ad5, 0x2b19335d22d71a95, 0x22d7335b3b5b2ad7, 0x22951a9723190a53, 0x0a130a5512951297, 
	0x8d276c61641f641f, 0x9d696c6154214b9f, 0x33192b59335b339d, 0x339b335b2b193b5b, 0x439d2b591ad70a53, 0x02130a551a971295, 0x1a951ad71ad71255, 0x12552b192b5b3b9f, 
	0x3b59335d2b5b2b5b, 0x2319335b53df439d, 0x3b5b339d3b9b439d, 0x53df54214bdd4bdf, 0x5bdd3b5b1ad501d1, 0x02110a1312950a53, 0x1a971ad71ad70a55, 0x2b193b9d5c636c61, 
	0x2b192b172b5b3bdf, 0x439b22d73b9d4bdd, 0x4c21852785276c61, 0x6c615c1f4bdd3b9d, 0x64616c61335b1a95, 0x0a550213018d0213, 0x1ad72b192ad5335b, 0x43df54212b1722d7, 
	0x2319129522d72b5b, 0x2b5b231b6ca574e5, 0x5c615c1f6c616461, 0x3b9b3b9d43df4bdd, 0x43e1a5ed7ca36461, 0x1ad7021302130213, 0x339f64633b59335b, 0x439d33170a5322d9, 
	0x1a9722d722d722d7, 0x1ad73ba16463335b, 0x2ad72b19335b439d, 0x3b9d3b9d3b5b4bdf, 0x64e7646143df74a3, 0x4b9d33192b192b5b, 0x84e76ca35c636461, 0x33171a950a530a55, 
	0x0a531a952ad712d7, 0x339d4bdd23191ad9, 0x2b1b2b5b2b172b17, 0x335b2b193b9d4c21, 0x74e52b1912953b9b, 0x53dd646395aba62d, 0x74a1439d8dad8ce5, 0x2b171a970a530a13, 
	0x02110a9522d95463, 0x4bdd12552b192b19, 0x335b2b5b4bdd6461, 0x645f5bdd7ca38d69, 0x852533190a530a53, 0x129522d96c634bdd, 0x331954218d273b5b, 0x339d2b5b1a971295, 
	0x4bdf64638d694bdd, 0x12950a532b5b4bdf, 0x5c21439b2b17541f, 0x541f439b4b9d541f, 0x53dd541f3b9b22d7, 0x2b5b43dd53dd4bdd, 0x4bdd8d275c61335b, 0x2b19339f3bdf43df, 
	0x6ca5646133191a97, 0x12552b1b43df4bdd, 0x43df3b9b3b9d439b, 0x2ad733192ad53b5b, 0x1ad723194bdd5421, 0x4bdf2ad533595463, 0x7ce5956954633b5b, 0x2ad72b5922d943df, 
	0x33192b172ad92297, 0x2b1b3b9d43df335b, 0x3b9d4bdf4b9d22d5, 0x2b1733192b173b5b, 0x2b5b335b64636ca5, 0x541f4bdd541f5c63, 0x95696c635c613b9b, 0x2b191ad722d92b19, 
	0x33192ad9335b2b19, 0x335b3359335b4bdd, 0x541f6c6374a36c61, 0x3b9b3b9f6ce56c5f, 0x54a5856995ed6463, 0x4c1f541f4c1f95ab, 0xa5ed64614c614c21, 0x439b33592b5b2319, 
	0x539b2b592b5922d7, 0x2b1923194bdf7ca5, 0x7ca59569be719dab, 0x856bae71b67174e3, 0x856b852795a984e7, 0x74a364a38d69beb3, 0x7ca344214bdf3b9d, 0x335b2b1922d72b5b, 
	0x3b592ad522d51ad7, 0x2b9d74e5ae2f7ca1, 0x6ca36c1f53595bdf, 0x74e58d27641f3b9d, 0x852774e78d6974a5, 0x84e78529a62f84e3, 0x335d3bdf3b9d2b5b, 0x231922d71ad7439d, 
	0x5461439b5c1f9569, 0x956984a3641f4bdd, 0x53dd3317129712d7, 0x23192b5b3b9d335b, 0x5c1f5463ae71aded, 0x74e774e785693b9b, 0x335d43df3b9d1ad7, 0x1ad51ad7335d541f, 
	0x6ca33b174b9b5399, 0x2ad52b59439b4359, 0x4b9b1a9512930a55, 0x1a953319335b3b9d, 0x43df5463852b84a3, 0x339d2b9d85254bdd, 0x4bdb2b5b4bdf335b, 0x12d7129774a37ca3, 
	0x22d522d722d51ad7, 0x2b174bdf33191a97, 0x2b171ad51a971295, 0x0a951a9722d7339b, 0x439d3b9d335b231b, 0x442164e9c6f5ae2d, 0x9dab84e56c614bdd, 0x5c638d274b9922d5, 
	0x1a97231922d72319, 0x339d4bdd43593359, 0x12510a5312951a95, 0x0a530a5312d72b19, 0x339d339d3b9d5423, 0x7d29a673cf37aeb5, 0xbf37aeb1b6b1bef5, 0xcf356c613b9d1ad5, 
	0x439d33191a971295, 0x2b593b5933572ad7, 0x1a95125312d71295, 0x12952b192b592b5b, 0x3b9f4c215ca595ab, 0x95ad85275ca57527, 0x7ce764a34c1f6ce7, 0xa62d74a34c1f2b19, 
	0x33192b17331b2b1b, 0x1ad73359335922d7, 0x1a951ad71ad51a95, 0x2b193b9d2b5b339d, 0x542164639dad84e7, 0x5c61339d3bdf5c63, 0x74a36ca564a58569, 0x8d27856974a153db, 
	0x53db331923192319, 0x2b192b5b2ad52317, 0x2b17125322d72b19, 0x335b335b339d5c21, 0x7ce7ae2f84e55421, 0x54612b5b335b43dd, 0x541f74a56ce58569, 0x8527542154638569, 
	0x84e553db1b193b9b, 0x53df74a53b9d2b59, 0x2ad72b1912971ad7, 0x43df3be14c2374a5, 0x9dab74a55ca3335b, 0x2319335b339d2b19, 0x3b9b74e55c636c61, 0x95695c213b9d4c21, 
	0x6ce9a62f9da9b671, 0x952553df439d53df, 0x335b3b5b12971ad7, 0x2b1d7d298d277ca3, 0x5c214bdd43df3b9d, 0x2319335b339d4c21, 0x74e5a631beb5b62d, 0x74a1439b54615423, 
	0x64e56ca595ad84e5, 0x435922d52b19331b, 0x335d6ca3439d5463, 0x8d6b7ca5435b3b9d, 0x339b439b3b5b3b9d, 0x335b1a95335d8d69, 0x7ca35c2164637ca5, 0x6ca16c6185278527, 
	0x539d4bdf43df2b1b, 0x3b9b12532b19435d, 0x331b3b9f5ca59def, 0x7461335b2b1b2319, 0x956b95ab641f335b, 0x3b9f4c217ca32295, 0x12552b5b3b5d4bdf, 0x4bdf4b9b7ca38d27, 
	0x3b594bdf3b9d22d7, 0x22d7231922d71a97, 0x331b4bdf54657ca5, 0x331b2b1b2b19335b, 0xae73a631b671a5ef, 0xe7bb9d6922950213, 0x12952b19335b3319, 0x335b1a975c636ca3, 
	0x2b191a951ad71295, 0x09d1439d2ad71255, 0x1295231b7d275c21, 0x439f1ad72b192b5b, 0x5ca57d2974a56ca3, 0x6c1f43591a9522d7, 0x2b192b192b1722d7, 0x23192b1b54216ca5, 
	
};

Gfx mat_test2_ocean_dl_sand_layerOpaque[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, 0, 0, 0, 1, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
	gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
	gsSPClearGeometryMode(G_CULL_FRONT | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_ZS_PIXEL | G_RM_FOG_SHADE_A | G_RM_AA_ZB_OPA_SURF2),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_NONE),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, test2_ocean_dl__00016548_32x32_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 1, G_TX_WRAP | G_TX_NOMIRROR, 5, 1),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 1, G_TX_WRAP | G_TX_NOMIRROR, 5, 1),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsDPSetTextureLUT(G_TT_NONE),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, test2_ocean_dl__0000DCE0_32x32_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 256, 6, 0, G_TX_WRAP | G_TX_MIRROR, 5, 0, G_TX_WRAP | G_TX_MIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(6, 0, 0, 1023, 256),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 256, 1, 0, G_TX_WRAP | G_TX_MIRROR, 5, 0, G_TX_WRAP | G_TX_MIRROR, 5, 0),
	gsDPSetTileSize(1, 0, 0, 124, 124),
	gsDPSetEnvColor(254, 254, 254, 83),
	gsSPEndDisplayList(),
};

Gfx mat_test2_ocean_dl_climb_layerOpaque[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, 0, 0, 0, 1, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
	gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
	gsSPClearGeometryMode(G_CULL_FRONT | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_ZS_PIXEL | G_RM_FOG_SHADE_A | G_RM_AA_ZB_OPA_SURF2),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_NONE),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, test2_ocean_dl__0000FCE0_32x32_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 1, G_TX_WRAP | G_TX_NOMIRROR, 5, 1),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 1, G_TX_WRAP | G_TX_NOMIRROR, 5, 1),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsDPSetTextureLUT(G_TT_NONE),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, test2_ocean_dl__0000DCE0_32x32_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 256, 6, 0, G_TX_WRAP | G_TX_MIRROR, 5, 0, G_TX_WRAP | G_TX_MIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(6, 0, 0, 1023, 256),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 256, 1, 0, G_TX_WRAP | G_TX_MIRROR, 5, 0, G_TX_WRAP | G_TX_MIRROR, 5, 0),
	gsDPSetTileSize(1, 0, 0, 124, 124),
	gsDPSetEnvColor(254, 254, 254, 83),
	gsSPEndDisplayList(),
};

Gfx mat_test2_ocean_dl_floor_mat_layerTransparent[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, 0, 0, 0, 1, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
	gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
	gsSPClearGeometryMode(G_CULL_FRONT | G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_ZS_PIXEL | G_RM_FOG_SHADE_A | G_RM_AA_ZB_XLU_SURF2),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_NONE),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, test2_ocean_dl__0000E4E0_32x32_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsDPSetTextureLUT(G_TT_NONE),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, test2_ocean_dl__0000E4E0_32x32_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 256, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 1, G_TX_WRAP | G_TX_NOMIRROR, 5, 1),
	gsDPLoadSync(),
	gsDPLoadBlock(6, 0, 0, 1023, 256),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 256, 1, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 1, G_TX_WRAP | G_TX_NOMIRROR, 5, 1),
	gsDPSetTileSize(1, 0, 0, 124, 124),
	gsDPSetPrimColor(0, 0, 254, 254, 254, 127),
	gsDPSetEnvColor(254, 254, 254, 127),
	gsSPEndDisplayList(),
};

SurfaceType test2_ocean_polygonTypes[] = {
	{ 0x00000000, 0x00000001 },
	{ 0x00800000, 0x00020001 },
};

CollisionPoly test2_ocean_polygons[] = {
	{ 0x0000, 0x0000, 0x0001, 0x0002, 0x0000, 0x7fff, 0x0000, 0x00d6 },
	{ 0x0000, 0x0000, 0x0002, 0x0003, 0x0000, 0x7fff, 0x0000, 0x00d6 },
	{ 0x0000, 0x0004, 0x0005, 0x0006, 0x0000, 0x7fff, 0x0000, 0xffcd },
	{ 0x0000, 0x0006, 0x0007, 0x0008, 0x0000, 0x7fff, 0x0000, 0xffcd },
	{ 0x0000, 0x0006, 0x0008, 0x0004, 0x0000, 0x7fff, 0x0000, 0xffcd },
	{ 0x0000, 0x0004, 0x0008, 0x0009, 0x0000, 0x0000, 0x7fff, 0x0236 },
	{ 0x0000, 0x000a, 0x0009, 0x000b, 0x0000, 0x0000, 0x7fff, 0x0236 },
	{ 0x0000, 0x0004, 0x000c, 0x0009, 0x0000, 0x0000, 0x7fff, 0x0236 },
	{ 0x0000, 0x000a, 0x000c, 0x0009, 0x0000, 0x0000, 0x7fff, 0x0236 },
	{ 0x0000, 0x000c, 0x000a, 0x000d, 0x0000, 0x8000, 0x0000, 0x0097 },
	{ 0x0000, 0x000c, 0x000d, 0x000e, 0x0000, 0x8000, 0x0000, 0x0097 },
	{ 0x0000, 0x0004, 0x000c, 0x000e, 0x8000, 0x0000, 0x0000, 0xff10 },
	{ 0x0000, 0x0004, 0x000f, 0x000e, 0x8000, 0x0000, 0x0000, 0xff10 },
	{ 0x0000, 0x0005, 0x0004, 0x000f, 0x0000, 0x7fff, 0x0000, 0xffcd },
	{ 0x0000, 0x0005, 0x000f, 0x0010, 0x0000, 0x7fff, 0x0000, 0xffcd },
	{ 0x0000, 0x0000, 0x0011, 0x0012, 0x7fff, 0x0000, 0x0000, 0x012c },
	{ 0x0000, 0x0000, 0x0012, 0x0013, 0x7fff, 0x0000, 0x0000, 0x012c },
	{ 0x0000, 0x0011, 0x0014, 0x0015, 0x7fff, 0x0000, 0x0000, 0x012c },
	{ 0x0000, 0x0011, 0x0015, 0x0012, 0x7fff, 0x0000, 0x0000, 0x012c },
	{ 0x0000, 0x0014, 0x0016, 0x0017, 0x0000, 0x7fff, 0x0000, 0x00d6 },
	{ 0x0000, 0x0014, 0x0017, 0x0018, 0x0000, 0x7fff, 0x0000, 0x00d6 },
	{ 0x0000, 0x0019, 0x001a, 0x001b, 0x0000, 0x7fff, 0x0000, 0xffcd },
	{ 0x0000, 0x001b, 0x001c, 0x001d, 0x0000, 0x7fff, 0x0000, 0xffcd },
	{ 0x0000, 0x001b, 0x001d, 0x0019, 0x0000, 0x7fff, 0x0000, 0xffcd },
	{ 0x0000, 0x001c, 0x001b, 0x001e, 0x0000, 0x0000, 0x8000, 0xfda2 },
	{ 0x0000, 0x001f, 0x0020, 0x0021, 0x0000, 0x0000, 0x8000, 0xfda2 },
	{ 0x0000, 0x001b, 0x001f, 0x001e, 0x0000, 0x0000, 0x8000, 0xfda2 },
	{ 0x0000, 0x001f, 0x0021, 0x001e, 0x0000, 0x0000, 0x8000, 0xfda2 },
	{ 0x0000, 0x001f, 0x000e, 0x000d, 0x0000, 0x8000, 0x0000, 0x0097 },
	{ 0x0000, 0x001f, 0x000d, 0x0020, 0x0000, 0x8000, 0x0000, 0x0097 },
	{ 0x0000, 0x001b, 0x000f, 0x000e, 0x8000, 0x0000, 0x0000, 0xff10 },
	{ 0x0000, 0x001b, 0x000e, 0x001f, 0x8000, 0x0000, 0x0000, 0xff10 },
	{ 0x0000, 0x001a, 0x0010, 0x000f, 0x0000, 0x7fff, 0x0000, 0xffcd },
	{ 0x0000, 0x001a, 0x000f, 0x001b, 0x0000, 0x7fff, 0x0000, 0xffcd },
	{ 0x0001, 0x0003, 0x0002, 0x0007, 0x0000, 0x0000, 0x7fff, 0x013d },
	{ 0x0001, 0x0003, 0x0007, 0x0006, 0x0000, 0x0000, 0x7fff, 0x013d },
	{ 0x0001, 0x0016, 0x0019, 0x001d, 0x0000, 0x0000, 0x8000, 0xfca8 },
	{ 0x0001, 0x0016, 0x0017, 0x001d, 0x0000, 0x0000, 0x8000, 0xfca8 },
};

Vec3s test2_ocean_vertices[34] = {
	{ -300, -214, 300 },
	{ 300, -214, 300 },
	{ 300, -214, -317 },
	{ -300, -214, -317 },
	{ -240, 51, -566 },
	{ -300, 51, -566 },
	{ -300, 51, -317 },
	{ 300, 51, -317 },
	{ 300, 51, -566 },
	{ 300, 339, -566 },
	{ -300, 151, -566 },
	{ -300, 339, -566 },
	{ -240, 151, -566 },
	{ -300, 151, -586 },
	{ -240, 151, -586 },
	{ -240, 51, -586 },
	{ -300, 51, -586 },
	{ -300, -214, -586 },
	{ -300, 339, -586 },
	{ -300, 339, 300 },
	{ -300, -214, -1473 },
	{ -300, 339, -1473 },
	{ -300, -214, -856 },
	{ 300, -214, -856 },
	{ 300, -214, -1473 },
	{ -300, 51, -856 },
	{ -300, 51, -606 },
	{ -240, 51, -606 },
	{ 300, 51, -606 },
	{ 300, 51, -856 },
	{ 300, 339, -606 },
	{ -240, 151, -606 },
	{ -300, 151, -606 },
	{ -300, 339, -606 },
};

WaterBox test2_ocean_waterBoxes[] = {
	{ -332, -120, -332, 664, 664, 0x00000000 },
	{ -332, -120, -1495, 664, 664, 0x00002000 },
};

CollisionHeader test2_ocean_collisionHeader = {
	-300,
	-214,
	-1473,
	300,
	339,
	300,
	34,
	test2_ocean_vertices,
	38,
	test2_ocean_polygons,
	test2_ocean_polygonTypes,
	0,
	2,
	test2_ocean_waterBoxes
};

