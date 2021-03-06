modded class MissionGameplay extends MissionBase {
    private ref SchanaHeadingMenu m_SchanaHeadingMenu;

    override void OnUpdate (float timeslice) {
        super.OnUpdate (timeslice);

        if (GetUApi ()) {
            UAInput inp = GetUApi ().GetInputByName ("UASchanaCompassToggle");

            if (inp && inp.LocalPress () && !m_UIManager.IsMenuOpen (MENU_CHAT_INPUT)) {
                if (m_SchanaHeadingMenu) {
                    m_SchanaHeadingMenu.SchanaToggleHeading ();
                } else {
                    m_SchanaHeadingMenu = new SchanaHeadingMenu (true);
                }
            }
        }
    }
}