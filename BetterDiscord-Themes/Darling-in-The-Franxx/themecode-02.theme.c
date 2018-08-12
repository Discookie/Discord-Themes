*///META{"name":"02 Theme by Ruben","description":"Theme with fix v2.1","author":"Ruben7173","version":"2.1"}*//

/**BACKGROUND**/
/**body{background:url('https://i.imgur.com/cEpzpDa.jpg') rgba(0,0,0,0);}**/
body{background:url('https://images.alphacoders.com/898/898775.jpg') rgba(0,0,0,0);}

/*https://hdqwalls.com/download/4k-zero-two-darling-in-the-franxx-w4-1920x1080.jpg*/
/** remove grey backgrounds **/
.theme-dark .friends-table, .theme-dark .theme-dark .messages-wrapper, .theme-dark .chat, .channels-Ie2l6A, .guilds-wrapper, .container-2lgZY8, .theme-dark .layer-3QrUeG, .theme-dark .layers-3iHuyZ, .theme-dark .typing-2GQL18,
.theme-dark .members-1998pB, .theme-dark .chat>.content, .theme-dark .title-3qD0b-, .container-PNkimc, .channels-Ie2l6A, #app-mount, .theme-dark .chat form, .container-2Thooq, .theme-dark .headerBar-UHpsPw,
.theme-dark .friends-table .theme-dark .messages .theme-dark .divider:before, .theme-dark .friends-table .theme-dark .messages .theme-dark .divider span, .theme-dark .messages-wrapper .theme-dark .messages .theme-dark .divider:before, .theme-dark .messages-wrapper .theme-dark .messages .theme-dark .divider span, .theme-dark #friends,
.theme-dark .activityFeed-28jde9, .theme-dark .header-1RC2Wb
{
    background:rgba(0,0,0,0)!important;
}

#friends, .theme-dark .search-l1Wz-Q, .theme-dark .chat, .theme-dark .channels-Ie2l6A, .theme-dark .container-2Thooq {
    background: rgba(0, 0, 0, 0)!important;
}

//.typeWindows-1za-n7 {display:none;}

/* Theme Fixer of DevilBro */
#friends, .noChannel-Z1DQK7, .activityFeed-HeiGwL, .lfg-3xoFkI, .app, .layers-3iHuyZ, .layer-3QrUeG, .container-2lgZY8, .content-region, .guilds-wrapper, .search-l1Wz-Q .search-bar, .chat .inner-zqa7da, .search-results-wrap, .search-results-wrap .search-header, .search-results-wrap .search-result-message.hit, .sidebar-region, .ui-standard-sidebar-view, .channels-Ie2l6A, .container-2Thooq {background: rgba(0,0,0,0.3) !important;}  .search-results-wrap .search-result-message.hit {box-shadow:none !important;} .titleBar-AC4pGV::after {content:""; position:absolute; z-index:-1; top:0; left:0; right:0; width:100%; height:22px; background: rgba(0,0,0,0.8) !important;} #friends .friends-table, .members-1998pB, .loading-316uYQ, .chat .content, .chat form, .chat, .content .flex-spacer, .messages-wrapper, .typing-2GQL18, .container-PNkimc, .headerBar-UHpsPw, .titleBar-AC4pGV, .titleWrapper-1l0xT9 .title-3qD0b-, .search-results-wrap .search-result::before, .search-results-wrap .search-result::after, .search-results-wrap .channel-name {background: transparent !important;}  ::-webkit-scrollbar-thumb {border-color: transparent !important; background: rgba(0,0,0,0.8) !important;} ::-webkit-scrollbar, ::-webkit-scrollbar-track-piece {border-color: transparent !important; background: transparent !important;} ::-webkit-scrollbar-corner {display: none !important;}

/**custom styling**/
/*** without the gray backgrounds, some of the styling just doesn't work, replacing it with transparent blacks and or transparent versions of their original color makes much more sense ***/
.contentSelectedText-3wUhMi,.private-channels .channel.selected a,.private-channels .channel:hover a,
.contentHoveredText-2D9B-x, .contentHoveredVoice-3p_NEO:active,.contentSelectedVoice-1WDIBM:active,
.theme-dark .member-3W1lQa:hover .content-OzHfo4, .theme-dark .member-3W1lQa.popout-open .content-OzHfo4, .theme-dark .member-3W1lQa.popout-open:hover .content-OzHfo4,
.theme-dark #friends .friends-table .friends-row:hover, .theme-dark .header-1RC2Wb, .theme-dark .body-SKIE6r, .theme-dark .emptyState-2-sT0o {
    background:rgba(0,0,0,0.2)!important;
}
.theme-dark .message-group .comment .markup code.inline{
    background:rgba(46,49,54,0.5)!important;
}

/** scrollbar **/
.theme-dark .member-2FrNV0:hover .content-3JzEqq, .theme-dark .friends-table .scroller-wrap ::-webkit-scrollbar-thumb, .theme-dark .messages-wrapper .scroller-wrap ::-webkit-scrollbar-thumb {
    background-color:rgba(0,0,0,0.5);
    border-color:transparent;
}
.scroller-wrap .scroller::-webkit-scrollbar-thumb, .scroller-wrap .scroller::-webkit-scrollbar-track-piece {
    border-color:transparent;
    background-clip: padding-box;
    border: 3px solid #fff;
    border-radius: 7px;
}
.theme-dark .friends-table .scroller-wrap ::-webkit-scrollbar-track-piece, .theme-dark .messages-wrapper .scroller-wrap ::-webkit-scrollbar-track-piece {
    background-color:transparent;
    border-color:transparent;
}
.scroller-wrap .scroller::-webkit-scrollbar-track-piece {
    background-color: #f3f3f3;
}
.scroller-wrap .scroller::-webkit-scrollbar-thumb, .scroller-wrap .scroller::-webkit-scrollbar-track-piece {
    background-color:transparent;
    background-clip: padding-box;
    border: 3px solid rgba(0,0,0,0);
    border-radius: 7px;
}

/**adding transparent gradients**/
/*** while technically also optional, I find no background is ever dark enough without looking bad ***/
.app-19_DXt{
    background:linear-gradient(to right,rgba(0,0,0,0.5),rgba(0,0,0,0.75) 310px,rgba(0,0,0,0.45) 70%,rgba(0,0,0,0) 95%) !important;
}

/** optional fun **/
img.emoji.jumboable{margin:0px !important;}/**fix emoji spacing for 2x2 emotes**/
img.emoji:not(.jumboable){height:32px !important;width:auto !important;}/**never resize emoji**/
.reaction img.emoji{height:16px !important;}/**nvm actually do resize reactions**/
.emojiPicker-3m1S-j{height:500px;}/** larger emojipicker part 1**/
.emojiPicker-3m1S-j .scroller-3vODG7{height:400px !important;}/** larger emojipicker part 2**/
.theme-dark .friends-table .messages .divider:not(.red) div, .theme-dark .messages-wrapper .messages .divider:not(.red) div {background:rgba(0,0,0,0.5);}
.links,
.help-container {
    display: none;
}

/* */

.layers,
.container-PNkimc,
.container-2lgZY8,
.theme-dark .layer-3QrUeG,
.theme-dark .chat-3bRxxu, .theme-dark .chat-3bRxxu form, .theme-dark .content-yTz4x3, .theme-dark .messagesWrapper-3lZDfY, .theme-dark .guildsWrapper-5TJh6 {
    background: rgba(0,0,0,0);
}
.theme-dark .layers-3iHuyZ,
.theme-dark .activityFeed-28jde9 {
    background: rgba(0,0,0,0.0) !important; }
    .theme-dark .chat-3bRxxu, .theme-dark .chat-3bRxxu form, .theme-dark .content-yTz4x3, .theme-dark .messagesWrapper-3lZDfY {
    background: rgba(0,0,0,0.0);
}
.theme-dark .chat form {
    background: transparent !important;
}
.links,
.chat-3bRxxu,
.typing-2GQL18,
.content-yTz4x3,
.guild-channels,
.private-channels,
.guild-header header,
.dividerRed-MKoLlr span,
.messagesWrapper-3lZDfY,
#rtc-connection,
#voice-connection {
    background: transparent !important;
}

/* */
.theme-dark .guildsWrapper-5TJh6A {
	background-color: transparent
}
.theme-dark .attachment-33OFj0 { 
background-color: rgba(47, 49, 54, 0.298039); 
border-color: rgba(47, 49, 54, 0.6); 
}
.theme-dark .chat-3bRxxu, .theme-dark .chat-3bRxxu form, .theme-dark .content-yTz4x3, .theme-dark .messagesWrapper-3lZDfY { 
background: rgba(0, 0, 0, 0.0); 
}
.theme-dark .markup-2BOw-j code, .theme-dark .markup-2BOw-j code.inline { 
background: rgb(47, 49, 54); 
}

/* Scroll Bar */
.theme-dark ::-webkit-scrollbar, .chat-3bRxxu ::-webkit-scrollbar {
	width: 10px !important
}
.theme-dark ::-webkit-scrollbar-track-piece, .chat-3bRxxu ::-webkit-scrollbar-track-piece, .channels-Ie2l6A ::-webkit-scrollbar-track, .chat-3bRxxu ::-webkit-scrollbar-track { 
    background: transparent !important; 
    border-color: transparent !important;
}
.theme-dark ::-webkit-scrollbar-thumb, .chat-3bRxxu ::-webkit-scrollbar-thumb {
    background-color: rgba(0,0,0,0.5) !important;
    border-color: transparent !important;
}
.theme-dark ::-webkit-scrollbar-thumb:hover, .chat-3bRxxu ::-webkit-scrollbar-thumb:hover {
    background-color: rgba(11, 25, 38, 255) !important;
}
.theme-dark ::-webkit-scrollbar-thumb {
    border-color: transparent !important;
    background: rgba(11, 25, 38, 0.5) !important;
}

/* Circular Group completelly */
.guild-1EfMGQ .guildInner-3DSoA4 {
    border-radius: 50% !important
}

/* TRANSPARENCY BY THE NAME/mic/headphone/settings part */
.theme-dark .container-2Thooq, .theme-dark .container-2lgZY8 { 
    border-radius: 10px;
    border: 1px solid #fff;
    border-color: #123;
    background: rgba(0, 0, 0,0.3) !important; 
}

/*Person Info Tabs*/
.theme-dark .headerNormal-T_seeN {
    background-color: rgba(0,0,0,0);
}
.theme-dark .quickMessage-1yeL4E, .theme-dark .body-3iLsc4, .theme-dark .footer-1fjuF6 {
    background-color: rgba(0,0,0,0.3);
}
.theme-dark .note-3kmerW textarea:focus {
    background:rgba(0,0,0,0.4);
    background-color: rgba(0,0,0,0.3);
}
.theme-dark .userPopout-3XzG_A {
    background-image: url(https://i.imgur.com/79hpG5N.jpg?1);
}
.theme-dark .bodyTitle-Y0qMQz {
    color: #fff;
    text-transform: uppercase;
}
.theme-dark .headerTop-3C2Zn0 {
    background-color: rgba(0,0,0,0.3);
}
.theme-dark .activity-11LB_k {
    background-color: rgba(0,0,0,0.3);
    padding: 10px;
}
.theme-dark .headerPlaying-j0WQBV {
    background: none;
}
.theme-dark .headerSpotify-zpWxgT {
    background: transparent;
}
.theme-dark .note-3kmerW textarea {
    color: #fff;
}
.theme-dark .quickMessage-1yeL4E {
    background-color: rgba(12, 25, 38, 0.5);
    border-color: #123;
}
.theme-dark .primary-jw0I4K {
    color: rgba(255,255,255,1);
}

/*Chat Box*/
.theme-dark .inner-zqa7da {
    background-color: hsla(0, 0%, 0%, 0.3);
}

/*Markdown Text*/
.theme-dark .markup-2BOw-j pre, .theme-dark .markup-2BOw-j code.inline {
    background: rgba(0, 0, 0, 0);
    background-color: rgba(0,0,0,0.3);
    border: 1px solid #fff;
    border-color: #123;
}
.theme-dark .hljs, .theme-dark .markup-2BOw-j code {
	background:none;
}

/*Customizing stuff around sent images*/
.theme-dark .embedInner-1-fpTo {
    background-color: hsla(0, 0%, 0%, 0.3);
    border-color: hsla(0, 0%, 0%, 0.4);
}
.theme-dark .embedPill-1Zntps {
    background-color: rgba(255,255,255,0.1);
}

/*Border and Text of users on servers*/
.theme-dark .membersGroup-v9BXpm {
    color: rgba(255, 0, 238, 255);
    border-radius: 5px;
    border: 01px solid #fff;
    border-color: rgba(255, 0, 238, 255);
    text-align: center;
    padding:08px;
}

/*Simple Edit to remove border from main background*/
.theme-dark .container-2Thooq, .theme-dark .container-2lgZY8 {
    border-radius: 0px;
    border: 1px solid #fff;
    border-color: #123;
    background: rgba(0, 0, 0,0.3) !important;
}

/*For the arrow options at top left side of discord */
.theme-dark .menu-Sp6bN1 {
    -webkit-box-shadow: 0 0 1px rgba(0,0,0,.82), 0 1px 4px rgba(0,0,0,.1);
    background: rgba(0, 0, 0,0.6) !important;
    border: 1px solid #fff;
    border-color: #123;
    box-shadow: 0 0 1px rgba(0,0,0,.82), 0 1px 4px rgba(0,0,0,.1);
}
.theme-dark .separator-2zcjq8 {
    border-bottom-color: #123;
}

/*Dividers of Settings and Border Colors*/
.side-8zPYf6 .separator-gCa7yv, #bd-settings-sidebar .ui-tab-bar-separator {
    height: 1px;
    margin-left: 10px;
    margin-right: 10px;
    border: 1px solid #fff;
    border-color: #123;
}
.theme-dark .divider-3573oO {
    background-color: #123;
}
.theme-dark .cardPrimaryOutline-29Ujqw {
    border-color: #123;
}
.theme-dark .cardPrimaryEditable-3KtE4g { /*Also changes color of border in Voice & Video//gonna change future*/
    border-color: #123;
}
.Select--single>.Select-control .Select-value, .Select-placeholder {
    border: 1px solid #fff;
    border-color: #123;
}
.wrapper-3jrx9n {
    -webkit-box-sizing: border-box;
    background-color: rgba(0,0,0,.1);
    border: 2px solid #123;
    border-radius: 8px;
    box-sizing: border-box;
    padding-bottom: 56.25%;
    position: relative;
}
.selected-mKYnfr.option-n0icdO {
    -webkit-box-shadow: 0 2px 0 rgba(0,0,0,.3);
    background-color: #123;
    border-color: #7289da;
    box-shadow: 0 2px 0 rgba(0,0,0,.3);
    opacity: 1;
}
.theme-dark .divider-3573oO {
    background-color: #123;
}
.theme-dark .notificationsSound-27jFSh {
    -webkit-box-shadow: inset 0 -1px 0 0 #4f545c;
    box-shadow: inset 0 -1px 0 0 #123;
}
.theme-dark .card-FDVird:before {
    background-color: #33363c;
    border-color: #123;
}
.theme-dark .user-settings-games .game {
    -webkit-box-shadow: 0 1px 0 0 #4f545c;
    box-shadow: 0 1px 0 0 #123;
}
.theme-dark .item-3eFBNF {
    -webkit-box-shadow: inset 0 -1px 0 0 #4f545c;
    box-shadow: inset 0 -1px 0 0 #123;
}
#bd-settingspane-container .ui-switch-item .style-description {
    border-bottom: 1px solid #123;
}
.bda-slist .bda-footer {
    border-top: 1px solid #123;
    padding-top: 5px;
    color: #87909c;
    font-weight: 700;
    font-size: 12px;
    overflow: hidden;
    display: flex;
    justify-content: space-between;
    align-items: center;
}
.bda-slist li {
    background: rgba(32,34,37,.6);
    border: 1px solid #123;
}
.bda-slist .bda-header {
    border-bottom: 1px solid #123;
}

/* Divider of Chat */
.theme-dark .divider-3gKybi:not(.red-1YQ4s7) div, .theme-dark .divider-3gKybi span {
    background: #123;
}
.theme-dark .attachButtonDivider-3Glu60 {
    background-color: #123;
}
.theme-dark .inner-zqa7da {
    border: 1px solid #fff;
    border-color: #123;
}

/*Divider on top of chat and channels, bottom borders*/
.theme-dark .titleWrapper-1l0xT9 {
    border-bottom: 1px solid #123;
}
.theme-dark .container-2Rl01u, .theme-dark .header-2o-2hj {
    border-bottom: 1px solid #123;
}

/*Removing background of some stuff such as notifications settings and such*/
.theme-dark .header-1R_AjF {
    -webkit-transition: -webkit-box-shadow .1s ease-out;
    transition: -webkit-box-shadow .1s ease-out;
    transition: box-shadow .1s ease-out;
    word-wrap: break-word;
    background-color: rgba(0,0,0,.1);
    background:none;
}
.theme-dark .inner-3wn6Q5 {
    background-color: rgba(0,0,0,.1);
    background:none;
}
.theme-dark .footer-2yfCgX, .theme-dark .modal-3HD5ck {
    background-color: rgba(0,0,0,.1);
    background:none;
    border: 1px solid #fff;
    border-color: #123;
}

/* Disables divider of chat */
.theme-dark .dividerEnabled-2TTlcf {
    border-bottom-color: rgba(0,0,0,0);
}

/*Some of the setting buttons and background*/
.theme-dark .side-8zPYf6 .itemSelected-1qLhcL, .theme-dark .userSettingsAccount-2eMFVR .userInfoViewingButton-2-jbH9, .theme-dark .lookFilled-1Gx00P.colorBrand-3pXr91 {
    background-color: #123;
    color: #fff;
}
#bd-settingspane-container .bd-pfbtn {
    background-color: #123;
    color: #fff;
}
.theme-dark .membersGroup-v9BXpm {
    box-shadow: 0 4px 0 rgba(0,0,0,.3);
}
.theme-dark .titleBar-AC4pGV {
    background: rgba(0, 0, 0, 0);
    background-color: rgba(0, 0, 0, 0);
}

/* Very hard buttons */
.theme-dark .cardPrimaryEditable-3KtE4g[style="border-color: rgb(114, 137, 218); background-color: rgb(114, 137, 218); padding: 10px;"] {
    background: rgba(17, 34, 51,0.8) !important
}
.theme-dark .cardPrimaryEditable-3KtE4g[style="border-color: rgb(114, 137, 218); background-color: rgb(114, 137, 218); padding: 10px;"] {
    border-color: rgba(12, 25, 38, 255)!important;
}
.theme-dark .cardPrimaryEditable-3KtE4g {
    background: rgba(12, 25, 38, 0.3);
}

/* CUSTOMIZATION for the page when you click pfp(profile picture) */
.theme-dark .root-SR8cQa {
    background: none;
}
.theme-dark .body-3ND3kc {
    background-color: rgba(0,0,0,0.6);
}

.theme-dark .topSectionNormal-2-vo2m {
    background-color: rgba(0,0,0,0.6);
}
.theme-dark .backdrop-1wrmKB[style="opacity: 0.85; background-color: rgb(0, 0, 0); z-index: 1000; transform: translateZ(0px);"] {
    background-color: rgba(0, 0, 0, 0)!important;
}
.theme-dark .tabBarContainer-1s1u-z {
    border-top: 1px solid #123;
    padding-left: 0px;
    text-align: center;
    position: relative;
    left: 20px;
}
.theme-dark .topSectionSpotify-1lI0-P {
    background: none;
    background-color: rgba(0,0,0,0.6);
}

/* Emoji page */
.theme-dark .bda-dark .emoji-picker, .bda-dark .emojiPicker-3m1S-j {
    background-color: rgba(0,0,0,0.4);
    border-radius: 15px !important;
    border-color: #123; !important;
}
.theme-dark .bda-dark .emoji-picker .category, .bda-dark .emojiPicker-3m1S-j .category-2U57w6 {
    background-color: rgba(0,0,0,0.0);
    border-radius: 0px !important;
    border-color: #123; !important;
    border: 1px solid #123;
}
.theme-dark .emojiPicker-3m1S-j .category-2U57w6 {
    color: #bebebf;
}
.theme-dark .emojiPicker-3m1S-j .stickyHeader-1SS0JU {
    background: rgba(0,0,0,0.3)
}
.theme-dark .bda-dark .emoji-picker .header .search-bar, .bda-dark .emojiPicker-3m1S-j .header-1nkwgG .search-bar {
    background: rgba(0,0,0,0.0)
}
.theme-dark .emojiPicker-3m1S-j .categories-1feg4n .item-16cXuq.selected-39BZ4S {
    border-bottom-color: #123;
}
.theme-dark .search-bar-light .searchBarInner-1_Tg2R {
    background: rgba(0,0,0,0.1)
    border: 1px solid transparent;
    border-radius: 3px!important;
}
.theme-dark .bda-dark .emoji-picker .search-bar input, .bda-dark .emojiPicker-3m1S-j .search-bar input {
    color: #FFF;
}
.theme-dark .search-bar-light .searchBarInner-1_Tg2R {
    border-radius: 3px !important;
    background: rgba(0,0,0,0.3);
    border-color: #123; !important;
}
.theme-dark .bda-dark .emoji-picker .scroller::-webkit-scrollbar, .bda-dark .emoji-picker .scroller::-webkit-scrollbar-track, .bda-dark .emoji-picker .scroller::-webkit-scrollbar-track-piece, .bda-dark .emojiPicker-3m1S-j .scroller-3vODG7::-webkit-scrollbar, .bda-dark .emojiPicker-3m1S-j .scroller-3vODG7::-webkit-scrollbar-track, .bda-dark .emojiPicker-3m1S-j .scroller-3vODG7::-webkit-scrollbar-track-piece {
    background-color: rgba(0,0,0,0.0)!important;
    border-color: rgba(0,0,0,0.0) !important;
}
.theme-dark .emojiPicker-3m1S-j .categories-1feg4n {
    border-top: 1px solid #123;
}

.theme-dark .side-8zPYf6 .itemSelected-1qLhcL, .theme-dark .userSettingsAccount-2eMFVR .userInfoViewingButton-2-jbH9, .theme-dark .lookFilled-1Gx00P.colorBrand-3pXr91[style="color: rgb(255, 255, 255); background-color: rgb(114, 137, 218);"] {
    background-color: rgb(12, 25, 38); !important
}

/* Discord nitro button at settings */
.theme-dark .side-8zPYf6 .itemSelected-1qLhcL, .theme-dark .userSettingsAccount-2eMFVR .userInfoViewingButton-2-jbH9, .theme-dark .lookFilled-1Gx00P.colorBrand-3pXr91[style="color: rgb(255, 255, 255); background-color: rgb(114, 137, 218);"] {
    background-color: rgba(12,25,38,.6)!important;
}

/* Progress Bars of settings and checkers*/
.theme-dark .barFill-23-gu- {
    background: rgba(12, 25, 38, 0.8);
    height: 100%;
}
.theme-dark .themeDefault-24hCdX.valueChecked-m-4IJZ {
    background-color: #123;
}
.themeDefault-24hCdX {
    background-color: rgba(12, 25, 38, 255);
}
.themeDefault-24hCdX.sizeDefault-2YlOZr {
    background: rgba(12, 25, 38, 0.4);
}
.theme-dark .bar-2Qqk5Z {
    background: rgba(12, 25, 38, 0.3);
}
#bd-settingspane-container .ui-switch-item .ui-switch-wrapper .ui-switch.checked {
    background: #123;
}
#bd-settingspane-container .ui-switch-item .ui-switch-wrapper .ui-switch {
background: rgba(12, 25, 38, 0.4);
}

/* Changing boxes color of settings or adding transparency*/
.userSettingsVoice-iwdUCU .media-engine-video {

    background:transparent;
}
.theme-dark .userSettingsVoice-iwdUCU .previewOverlay-2O7_KC {
    
    background-color: rgba(12, 25, 38, 0.3);
    border-color: #123;
}
.theme-dark .userSettingsAccount-2eMFVR .userInfoEditing-1CEzdT, .theme-dark .userSettingsAccount-2eMFVR .userInfoViewing-16kqK3 {
    background: rgba(12, 25, 38, 0.3);
}
.theme-dark .cardPrimaryOutline-29Ujqw {
    border-color: #123;
    background: rgba(12, 25, 38, 0.3);
}
.theme-dark .cardPrimary-1Hv-to {
    background: rgba(12, 25, 38, 0.3);
    border-color: #123;
}
.theme-dark .accountBtnInner-sj5jLs {
    background-color: rgba(12, 25, 38, 0.5);
    border-color: #123;
}
.lookGhost-2Fn_0-.colorGrey-2DXtkV {
    background-color: rgba(12, 25, 38, 0.5);
    color: #747f8d;
}
.theme-dark .user-settings-games .not-detected, .theme-light .user-settings-games .not-detected {
    background-color: rgba(12, 25, 38, 0.5);
}
.inner-1JeGVc {
    background-color: rgba(0, 0, 0, 0.8);
}
.theme-dark .input-cIJ7To:hover {
    border-color: #123;
}
.theme-dark .questionMark-CWEQZn:hover {
    background-color: rgba(12, 25, 38, 0.5);
}
.theme-dark .questionMark-CWEQZn {
    background-color: #123;
}
.theme-dark .input-cIJ7To {
    background-color: rgba(0,0,0,.1);
    border-color: rgba(12, 25, 38, 0.5);
    color: #f6f6f7;
}
.theme-dark .input-cIJ7To.disabled-2BKQFm {
    border-color: rgba(12, 25, 38, 0.3);
}
element.style {
    color: rgb(255, 255, 255);
    background-color: rgb(12, 25, 38);
}

/* Find or start conversation page */
.theme-dark .container-3qKHyN {
    height: 220px;
    width: 560px;
}
.theme-dark .quickswitcher-3JagVE {
    background-color: rgba(0, 0, 0, 0.5);
    color: #dcddde;
}
.theme-dark .inner-1JeGVc {
    background-color: rgba(0, 0, 0, 0.0);
}
.theme-dark .input-2VB9rf {
    -webkit-box-shadow: 0 2px 5px rgba(0,0,0,.2), 0 0 0 1px rgba(0,0,0,.1);
    background-color: rgba(0, 0, 0, 0.6);
    box-shadow: 0 2px 5px rgba(0,0,0,.2), 0 0 0 1px rgba(0,0,0,.1);
    color: #fff;
    border: 1px solid #123;
}
.theme-dark .keybindShortcut-1BD6Z1 span {
    -webkit-box-shadow: inset 0 -4px 0 rgba(35,39,42,.6);
    background-color: rgba(0,0,0,0.0);
    border: 1px solid #123;
    box-shadow: inset 0 -4px 0 rgba(35,39,42,.0);
    color: #fff;
}
.theme-dark .resultFocused-3aIoYe {
    background-color: rgba(0,0,0,0.5);
    border: 1px solid #123;
}

/* At chat, with sent attachments, the box customization here */
.theme-dark .attachment-33OFj0 {
    background-color: rgba(0, 0, 0, 0.3);
    border-color: rgba(12, 25, 38, 0.5);
}

/*Pinned Messages Tab*/
.theme-dark .messagesPopoutWrap-1MQ1bW {
    -webkit-box-shadow: 0 2px 10px 0 rgba(0,0,0,20%);
    background-color: none;
    border: 1px solid rgba(28,36,43,.6);
    box-shadow: 0 2px 10px 0 rgba(0,0,0,.2);
}
.theme-dark .header-ykumBX {
    -webkit-box-shadow: 0 2px 3px 0 rgba(0,0,0,20%);
    background-color: rgba(0,0,0,0.0);
    box-shadow: 0 2px 3px 0 rgba(12, 25, 38,.4);
    border-color: #123;
}
.themedPopout-25DgLi {
    -ms-flex-direction: column;
    -webkit-box-direction: normal;
    -webkit-box-orient: vertical;
    -webkit-box-shadow: 0 2px 10px 0 rgba(0,0,0,10%);
    -webkit-box-sizing: border-box;
    background-color: none;
    border: 1px solid hsla(0,0%,75%,.3);
    border-radius: 5px;
    box-shadow: 0 2px 10px 0 rgba(0,0,0,.1);
    box-sizing: border-box;
    display: -webkit-box;
    display: -ms-flexbox;
    display: flex;
    flex-direction: column;
}
.themedPopout-25DgLi .footer-SRC48P {
    background-color: rgba(0, 0, 0, 0.0);
    border-radius: 0 0 5px 5px;
    display: -webkit-box;
    display: -ms-flexbox;
    display: flex;
    padding: 10px;
    text-align: center;
}
.theme-dark .messagesPopoutWrap-1MQ1bW {
    background:transparent;
    background-color: rgba(0,0,0,0.7);
    border-color: #123;
}
.themedPopout-25DgLi .footer-SRC48P {
    background-color: rgba(0, 0, 0, 0);
    display: flex;
    text-align: center;
    border-top: #123;
    border-radius: 5px 5px 5px 5px;
    padding: 10px;
}
.theme-dark .messageGroupWrapper-o-Zw7G {
    background-color: rgba(0,0,0,0.0);
    border-color: #123;
}

/*While in call customization*/
.theme-dark .video-1FfuMD {
    background-color: rgba(0,0,0,0.0);
    background-position: 50%;
    background-size: 100%;
    cursor: default;
    height: 100%;
    min-height: 275px;
    overflow: hidden;
    position: relative;
    width: 100%;
}
.theme-dark .wrapper-29NfPK {
    background-color: rgba(0,0,0,0.5);
    border: 1px solid hsla(0,0%,75%,.3);
    border-color: #123;
    border-radius: 5px;
}
.theme-dark .wrapper-29NfPK.minimum-2d6zH6 .actions-2vadYq .center-1Vp33r {
    background-color: rgba(0,0,0,0.0);
    border-color: #123;
}
.theme-dark .callAvatar-v-u4BM.voice-2D-tt_ .callAvatarStatus-3y6S04 {
    border-color: #123;
}

/* Chat bot Messages customizations (intended for clyde bot) */
.theme-dark .isLocalBot-38G0P0 {
    -webkit-box-shadow: -20px 0 #123, 20px 0 #36393f, -20px -1px 0 0 #1236, -20px 1px 0 #3e4146, 20px 1px 0 #3e4146, 20px -1px 0 #3e4146;
    background-image: -webkit-gradient(linear,left top,right top,color-stop(80%,rgba(47,49,54,30%)),to(#123));
    background-image: linear-gradient(90deg,rgba(12,25,38,.1) 80%,#123);
    border-color: transparent;
    box-shadow: -15px 0 #123, 15px 0 #123, -20px -1px 0 0 #123, -20px 1px 0 #123, 20px 1px 0 #123, 20px -1px 0 #123;
    color: hsla(0,0%,98%,.3);
}

/* search button border at chat */
.theme-dark .search .searchBar-2_Yu-C {
    border: 1px solid hsla(0,0%,75%,.3);
    border-color: #123;
}

/* Fix for a glitch with transparency on some pages */
.theme-dark .modal-3HD5ck {
    background-color: rgba(0,0,0,0.8);
    background: (0,0,0,0.7);
    border: 1px solid #123;
    border-color: #123;
}

/* Customization on discord logo and below from it */
.theme-dark .guild-1EfMGQ .guildInner-3DSoA4 {
    border: 1px solid #123;
    background: rgba(12, 25, 38, 0.5);
}
.theme-dark .homeIcon-1FoKUJ {
    color: #fff;
    border: 1px solid #123;
    background: rgba(12, 25, 38, 0.5);
}

/* Online Status modes */
.theme-dark .item-1GzJrl:hover {
    background-color: rgba(12, 25, 38, 0.5);
    color: #fff;
}
/* Place when its connected to a call where it has disconnect button and etc */
.theme-dark .container-1UB9sr {
    background: rgba(0,0,0,.3);
    border-left: 1px solid #123;
    border-right: 1px solid #123;
    border-top: 1px solid #123;
    border-bottom: 1px solid rgba(0,0,0,0);
}

/* Ping Information Page */
.theme-dark .container-2x5lvQ header {
    background-color: rgba(0,0,0,0.7);
    border: 1px solid #123;
    border-radius: 5px;
}
.theme-dark .container-2x5lvQ section {
    background-color: rgba(0,0,0,0.6);
    border: 1px solid #123;
    border-radius: 5px;
}
/* */
.theme-dark .searchQuery-1B7rtx.selected-rZcOL- {
    background-color: rgba(0,0,0,0.6);
	border: 1px solid #123;
    border-radius: 5px;
}
.theme-dark .keybindShortcut-1BD6Z1 {
    color: rgba(0,0,0,0);
}

/* Search button area */
.theme-dark .searchPopout-1vUlP3 {
    -webkit-box-shadow: 0 2px 10px 0 rgba(0,0,0,.2);
    background-color: rgba(0,0,0,0.3);
    border: 1px solid #123;
    box-shadow: 0 2px 10px 0 rgba(0,0,0,.2);
}
.theme-dark .calendarPicker-2yf6Ci .react-datepicker__day {
    border-left-color: #123;
    border-top-color: #123;
    background-color: hsla(210, 52%, 10%, 0);
}
.theme-dark .searchQuery-1B7rtx.selected-rZcOL- {
    background-color: rgba(0,0,0,0.3);
	border: 1px solid #123;
    border-radius: 5px;
}
.theme-dark .keybindShortcut-1BD6Z1 {
    color: rgba(0,0,0,0);
    border: 0px solid #123;
}
.theme-dark .keybindShortcut-1BD6Z1 span {
    background-color: rgba(0,0,0,0.0);
    border: 0px solid #123;
}
.theme-dark .option-96V44q.selected-rZcOL- {
    background-color: hsla(210, 52%, 10%, 0.6);
}
.theme-dark .calendarPicker-2yf6Ci .react-datepicker {
    background-color: hsla(210, 52%, 10%, 0);
}
.theme-dark .calendarPicker-2yf6Ci .react-datepicker__header {
    background-color: hsla(210, 52%, 10%, 0.0);
    border-color: rgba(0,0,0,0.0);
}
.theme-dark .calendarPicker-2yf6Ci .react-datepicker__day.react-datepicker__day--disabled, .theme-dark .calendarPicker-2yf6Ci .react-datepicker__day.react-datepicker__day--disabled:hover {
    background-color: hsla(210, 52%, 10%, 0.5);
    color: hsla(240,6%,97%,.3);
}
.theme-dark .calendarPicker-2yf6Ci .react-datepicker__day--disabled, .theme-dark .calendarPicker-2yf6Ci .react-datepicker__day--outside-month {
    background-color: hsla(210, 52%, 10%, 0);
}
.theme-dark .datePicker--XZbmJ .datePickerHint-3Q1Udw .hintValue-29ny8Z {
    background-color: hsla(210, 52%, 10%, 0.7);
    color: #fff;
}
.theme-dark .datePicker--XZbmJ .datePickerHint-3Q1Udw .hintValue-29ny8Z:hover {
    background-color: #123;
}
.theme-dark .searchAnswer-3Dz2-q, .theme-dark .searchFilter-2ESiM3 {
    background-color: #123;
}

/* Boxes in discord settings */
.theme-dark .bda-slist li {
    background: hsla(210, 52%, 10%, 0.2);
    border: 1px solid #123;
}
.theme-dark .bda-slist .bda-footer button {
    background: #123;
}

/* Bottom button of settings and other buttons */
#bd-settings-sidebar .ui-tab-bar-item.selected {
    color: #fff;
    background-color: #123;
}

/* boxes for when right clicking channels, customizing the options */
.theme-dark .contextMenu-HLZMGh {
    background: rgba(0,0,0,0.6);
    border: 10px;
    border: 2px solid #123;
    border-radius: 10px;
}
.theme-dark .item-1Yvehc:hover {
    background: rgba(11, 25, 38, 0.7);
}
.theme-dark.contextMenu-HLZMGh {
    -webkit-box-shadow: 0 0 1px rgba(0,0,0,.82), 0 1px 4px rgba(0,0,0,.1);
    background: rgba(0,0,0,0.6);
    box-shadow: 0 0 1px rgba(0,0,0,.82), 0 1px 4px rgba(0,0,0,.1);
    border: 1px solid #123;
}
/* Customizing Home */
.theme-dark .card-7JP0BX {
    background-color: rgba(12, 25, 38, 0.5);
    color: #f6f6f7;
}
.theme-dark .headerButtonColor-G7_f-V {
    background: #123;
    color: #fff;
}
.theme-dark .lookFilled-1Gx00P.colorPrimary-3b3xI6 {
    background-color: #123;
    color: #f6f6f7;
}
.theme-dark .guildIconEmptyBackground-14tfYf {
    background-color: #123;
}
.theme-dark .item-1Yvehc {
    color: hsla(0,0%,100%,255);
}
.theme-dark .item-1Yvehc:hover {
    background: #123;
    color: #fff;
}
.theme-dark.contextMenu-HLZMGh {
    background: rgba(0, 0, 0, 0.5);
}
.theme-dark .paginationItem-3-MBTL:after {
    background: linear-gradient(270deg,transparent 0,#123);
}
.theme-dark .background-17WUpK{
  --opacity-top: 1;
  --opacity-bottom: 0;
  -webkit-mask: linear-gradient(to bottom, rgba(47, 49, 54,var(--opacity-top)), rgba(47, 49, 54,var(--opacity-bottom)));
background-color:rgba(0,0,0,0.0);
}
.theme-dark .article-FleDq5 {
  background: rgba(12, 25, 38,255);
}

/* Custom CSS Editor */
.theme-dark .ace-monokai {
    border: 2px solid #123;
    border-color:#123;
    background-color: rgba(0, 0, 0, 0.3);
    color: #F8F8F2;
}
.theme-dark .ace-monokai .ace_gutter-active-line {
    background: #123;
}
.theme-dark .content-region #bd-customcss-attach-controls, #bd-customcss-detach-container #bd-customcss-attach-controls {
    background: hsla(210, 52%, 10%, 0.2);
    color: #FFF;
    border: 2px solid #123;
    border-top: 0px;
    box-shadow: 0 0px 0 0 #2f3129 inset;
}
.theme-dark .ui-standard-sidebar-view #bd-customcss-attach-controls button:hover, .bd-detached-css-editor #bd-customcss-attach-controls button:hover {
    background:hsla(210, 52%, 10%, 0.2);
}
.theme-dark .ui-standard-sidebar-view #bd-customcss-attach-controls button, .bd-detached-css-editor #bd-customcss-attach-controls button:hover {
    background: #123;
}
.theme-dark .ace-monokai .ace_gutter {
    background-color: hsla(210, 52%, 10%, 0.6);
    color: #F8F8F2;;
}
.theme-dark .ace-monokai .ace_gutter-active-line {
    background-color: #123;
}
.theme-dark .ace_scroller {
    background-color: rgba(0, 0, 0, 0.3);
}
#bd-customcss-detach-container {
    border: 1px solid #123;
    border-color:#123;
    background-color: rgba(0,0,0,0.8);
}
.theme-dark .content-region #bd-customcss-attach-controls, #bd-customcss-detach-container #bd-customcss-attach-controls {
    background: hsla(210, 52%, 10%, 0.6);
    color: #FFF;
    border: 2px solid #123;
    box-shadow: 0 0px 0 0 #2f3129 inset;
}
css-editor #bd-customcss-attach-controls button {
    background: hsla(210, 52%, 10%, 0.2);
}
.theme-dark .ui-standard-sidebar-view #bd-customcss-attach-controls button, .bd-detached-css-editor #bd-customcss-attach-controls button {
    background: #123;
}
/* added extra on css */
.theme-dark .ace-monokai {
    background-color: rgba(0,0,0,0.0);
    color: #F8F8F2;
}
.theme-dark .ace-monokai .ace_gutter {
    background: hsla(210, 52%, 10%, 0.7);
    color: #fff;
}

/* Uploading File page */
.theme-dark .attachPopout-1n-ZKM {
    border: 1px solid #123;
    background-color: rgba(0,0,0,0.3);
}
.theme-dark .attachPopoutRow-KrE-f6:hover {
    background-color: hsla(210, 52%, 10%, 0.2);
}
.theme-dark .uploadModal-2ifh8j {
    -ms-flex-direction: column;
    -webkit-box-direction: normal;
    -webkit-box-orient: vertical;
    -webkit-filter: blur(0);
    -webkit-perspective: 1000;
    background-color: rgba(0,0,0,0.6);
    border-radius: 10px;
    display: -webkit-box;
    display: -ms-flexbox;
    display: flex;
    filter: blur(0);
    flex-direction: column;
    min-height: 258px;
    perspective: 1000;
    width: 520px;
}
.theme-dark .uploadModal-2ifh8j .inner-3nWsbo {
    border: 2px dashed #123;
}
.theme-dark .inner-1JeGVc {
    border: 1px solid #123;
    border-radius: 10px;
    background-color: rgba(0, 0, 0, 0.0);
}
.theme-dark .uploadModal-2ifh8j .footer-3mqk7D {
    background-color:transparent;
}
.theme-dark .uploadModal-2ifh8j .footer-3mqk7D .button-primary {
-webkit-transition: opacity .2s ease-in-out;
    background-color: rgba(0,0,0,0.6);
    color: #fff;
    transition: opacity .2s ease-in-out;
}
.theme-dark .uploadModal-2ifh8j .footer-3mqk7D .button {
    background-color: #123;
    height: 36px;
    min-width: 80px;
    padding: 0!important;
}

/* Another Options button (detach button) */
.theme-dark .ui-standard-sidebar-view #editor-detached button {
    background: #123;
}

/* Theme Message Group Blocked Transparency and border */
.theme-dark .messageGroupBlocked-3wrQQX {
    background: rgba(0, 0, 0, 0.4);
    border-color: #123;
}
.theme-dark .messageGroupBlocked-3wrQQX .messageGroupBlockedBtn-1PBBh- {
    background: transparent;
    color: #8a8e94;
}
/* Theme Message Group Blocked Transparency and border When selected */
.theme-dark .messageGroupBlocked-3wrQQX.revealed-1_RKsf {
    background: rgba(0, 0, 0, 0.4);
    border-color: #123;
}