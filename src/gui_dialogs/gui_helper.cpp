#include "gui_helper.h"
#include "../gui.h"
#include "../main.h"
#include "../game.h"
#include "../string_table.h"
#include "../championship.h"
#include "../profiles.h"
#include "../helper_str.h"
#include "../app_restrictions.h"
#include "gui_menu_championship_progress.h"
#include "gui_menu_championship_winner.h"
#include "gui_menu_timeattack.h"
#include "gui_menu_main.h"
#include "gui_menu_arcade.h"
#include "gui_menu_tutorial3.h"
#include "gui_menu_rivals_score.h"
#include "gui_menu_hover_unlocked.h"
#include <sstream>
#include <iomanip>
#include <cstdlib>

using namespace irr;

void GuiHelper::FillTextSliderWithTrackNames(irr::gui::IGUITextSlider *slider_, LevelDifficulty difficulty_, bool onlyEnabled_)
{
    if  (!slider_ )
        return;
    if ( !APP.GetLevelManager() )
        return;
    slider_->clearTexts();

    for ( int i=0; i < APP.GetLevelManager()->GetNumLevels(difficulty_); ++i )
    {
        const LevelSettings &settings = APP.GetLevelManager()->GetLevel(i, difficulty_);

    if ( IS_DEMO_VERSION )
    {
        if ( settings.mId != 18 )  // white camel
            continue;
    }

#if defined(HOVER_RELEASE)
        if( !onlyEnabled_ || APP.GetProfileManager()->IsLevelUnlocked(settings.mId) )
#endif
        {
            slider_->addText( settings.mName.c_str() );
        }
    }

    if ( slider_->getNumTexts() == 0 )
    {
        slider_->addText( L"-" );
    }
}

void GuiHelper::FillTextSliderWithLevelNames(irr::gui::IGUITextSlider *slider_, CS_Season season_)
{
    if  (!slider_ )
        return;
    if ( !APP.GetChampionship() )
        return;
    slider_->clearTexts();

    int firstRace = 0;
    int numRaces = APP.GetChampionship()->GetNumRaces();
    if ( season_ != SEASON_ALL )
        numRaces /= 3;
    if ( SEASON_2 == season_ )
        firstRace += numRaces;
    else if ( SEASON_3 == season_ )
        firstRace += 2 * numRaces;
    for ( int i=0; i < numRaces; ++i )
    {
        slider_->addText( MakeLevelName(i+firstRace).c_str() );
    }
}

void GuiHelper::FillTextSliderWithNumbers(irr::gui::IGUITextSlider *slider_, int from_, int to_, int stepSize_, bool useOffStringForZero_)
{
    if  (!slider_ )
        return;
    slider_->clearTexts();

    for ( int i=from_; i<=to_; i+= stepSize_ )
    {
        if ( i == 0 && useOffStringForZero_ )
        {
            slider_->addText( APP.GetStringTable()->Get("id_off").c_str() );
        }
        else
        {
            slider_->addText( ExtStr::int_to_wstr(i).c_str() );
        }
    }
}

irr::core::stringw GuiHelper::MakeLevelName(int index_)
{
    // This hack gets around some unfortunate variable names (historical reasons)
    const char *names[] = {
    "id_1ch01",
    "id_1ch02",
    "id_1ch03",
    "id_1ch05",
    "id_1ch06",
    "id_1ch07",
    "id_1ch09",
    "id_1ch10",
    "id_1ch11",
    "id_1ch13",
    "id_1ch14",
    "id_1ch15",

    "id_2ch01",
    "id_2ch02",
    "id_2ch03",
    "id_2ch05",
    "id_2ch06",
    "id_2ch07",
    "id_2ch09",
    "id_2ch10",
    "id_2ch11",
    "id_2ch13",
    "id_2ch14",
    "id_2ch15",

    "id_3ch01",
    "id_3ch02",
    "id_3ch03",
    "id_3ch05",
    "id_3ch06",
    "id_3ch07",
    "id_3ch09",
    "id_3ch10",
    "id_3ch11",
    "id_3ch13",
    "id_3ch14",
    "id_3ch15" };

    return APP.GetStringTable()->Get(names[index_]);
}

void GuiHelper::SetGameModeMenu(GAME_TYPE gameType_)
{
    if ( gameType_ == GT_ARCADE )
    {
        APP.GetGui()->SetActiveDialog( APP.GetGui()->GetGuiMenuArcade() );
    }
    else if (   gameType_ == GT_HOTLAP
            ||  gameType_ == GT_TIMERACE )
    {
        APP.GetGui()->SetActiveDialog( APP.GetGui()->GetGuiMenuTimeAttack() );
    }
    else if ( gameType_ == GT_RIVALS )
    {
        APP.GetGui()->SetActiveDialog( APP.GetGui()->GetGuiMenuRivalsScore() );
    }
    else if ( gameType_ == GT_CHAMPIONSHIP )
    {
        bool specialScreen = false;
        PlayerProfile* profile = APP.GetProfileManager()->GetSelectedProfile();
        if ( profile )
        {
            if ( profile->mChampionship.IsItTimeToDisplayTutorial3() )
            {
                specialScreen = true;
                profile->mChampionship.SetTutorial3WasDisplayed();
                APP.GetProfileManager()->SaveProfiles();
                APP.GetGui()->SetActiveDialog( APP.GetGui()->GetGuiMenuTutorial3() );
            }
            if ( profile->mChampionship.IsItTimeToDisplayWinner() )
            {
                specialScreen = true;
                profile->mChampionship.SetWinnerWasDisplayed();
                APP.GetProfileManager()->SaveProfiles();
                APP.GetGui()->SetActiveDialog( APP.GetGui()->GetGuiMenuChampWinner() );
            }

            if ( profile->ShouldShowHoverUnlockedScreen(1) )
            {
                specialScreen = true;
                profile->SetHoverUnlockedScreenShown(1);
                APP.GetProfileManager()->SaveProfiles();
                APP.GetGui()->GetGuiMenuHoverUnlocked()->SetHover(1);
                APP.GetGui()->SetActiveDialog( APP.GetGui()->GetGuiMenuHoverUnlocked() );
            }
            else if ( profile->ShouldShowHoverUnlockedScreen(2) )
            {
                specialScreen = true;
                profile->SetHoverUnlockedScreenShown(2);
                APP.GetProfileManager()->SaveProfiles();
                APP.GetGui()->GetGuiMenuHoverUnlocked()->SetHover(2);
                APP.GetGui()->SetActiveDialog( APP.GetGui()->GetGuiMenuHoverUnlocked() );
            }
        }
        if ( !specialScreen )
        {
            APP.GetGui()->SetActiveDialog( APP.GetGui()->GetGuiMenuChampionshipProgress() );
        }
    }
    else    // should not happen
    {
        APP.GetGui()->SetActiveDialog( APP.GetGui()->GetGuiMenuMain() );
    }
}

std::wstring GuiHelper::MakeTimeString(s32 time_, bool showPlusSign_, int signOnZero_)
{
    std::ostringstream stream;  // wostringstream would be nicer, but might cause problems on mingw, and i don't wanna reboot and test now
    u32 timeAbs = abs(time_);
    int minutes = timeAbs / 60000;
    timeAbs -= minutes * 60000;
    int seconds = timeAbs / 1000;
    timeAbs -= seconds * 1000;
    int centiseconds = timeAbs / 10;
    timeAbs -= centiseconds * 10;
    if ( timeAbs >= 5 )
    {
        ++centiseconds;
	    if ( centiseconds >= 100 )
	    {
		    ++seconds;
		    centiseconds -= 100;
	    }
    }

    if ( time_ == (int)Game::TIME_UNUSED )
    {
        stream  << std::setw(2) << std::setfill('0') << "--" << '.'
                << std::setw(2) << std::setfill('0') << "--" << '.'
                << std::setw(2) << std::setfill('0') << "--";
    }
    else
    {
        if ( time_ < 0 )    // minus sign for negative times
            stream << "-";
        else if ( time_ > 0 && showPlusSign_ )
        {
            stream << "+";
        }
        else if ( time_ == 0 )
        {
            if ( signOnZero_ < 0 )
                stream << "-";
            else if ( signOnZero_ > 0 )
                stream << "+";
        }

        stream  << std::setw(2) << std::setfill('0') << minutes << '.'
                << std::setw(2) << std::setfill('0') << seconds << '.'
                << std::setw(2) << std::setfill('0') << centiseconds;
    }
    std::string str(stream.str());

    return std::wstring( str.begin(), str.end() );
}

u32 GuiHelper::GetTimeFromTimeString(const std::wstring &strTime_)
{
    if  ( !strTime_.length() )
        return 0;

    u32 time = 0;
    std::string strTime(strTime_.begin(), strTime_.end());  // working with string because of plattform portability problems
    std::string::size_type p1 = 0;
    std::string::size_type p2 = strTime.find_first_of('.', 0);
    std::string tok( strTime.substr(p1, p2-p1) );
    time += 60000*atoi(tok.c_str());

    p1 = p2+1;
    p2 = strTime.find_first_of('.', p1);
    tok = strTime.substr(p1, p2-p1);
    time += 1000*atoi(tok.c_str());

    p1 = p2+1;
    tok = strTime.substr(p1);
    time += 10*atoi(tok.c_str());

    return time;
}