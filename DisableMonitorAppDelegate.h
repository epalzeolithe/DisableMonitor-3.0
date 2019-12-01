/**
 * DisableMonitor, Disable Monitors on Mac
 *
 * Copyright (C) 2014 Tobias Salzmann
 *
 * DisableMonitor is free software: you can redistribute it and/or modify it under the terms of the
 * GNU General Public License as published by the Free Software Foundation, either version 2 of the
 * License, or (at your option) any later version.
 *
 * DisableMonitor is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 * without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * See the GNU General Public License for more details. You should have received a copy of the GNU
 * General Public License along with DisableMonitor. If not, see <http://www.gnu.org/licenses/>.
 *
 * Authors: Tobias Salzmann
 */

#import <Cocoa/Cocoa.h>
#import "DisplayData.h"

@interface DisableMonitorAppDelegate : NSObject <NSApplicationDelegate, NSMenuDelegate, NSWindowDelegate> {
    IBOutlet NSMenu *statusMenu;
    NSStatusItem *statusItem;
    NSMenuItem *menuItemLock;
    NSMenuItem *menuItemScreenSaver;
    NSMenuItem *menuItemQuit;
}

@property (assign) IBOutlet NSWindow *pref_window;
@property (assign) IBOutlet NSTextField *pref_lblHeader;
@property (assign) IBOutlet NSButton *pref_btnClose;
@property (assign) IBOutlet NSOutlineView *pref_lstResolutions;
@property (assign) IBOutlet NSTabView *pref_tabView;
@property (assign) IBOutlet NSButton *pref_chkEnableMonitor;
@property (assign) IBOutlet NSOutlineView *pref_lstEnableMonitors;
@property (assign) IBOutlet NSButton *pref_chkDisableMonitor;
@property (assign) IBOutlet NSOutlineView *pref_lstDisableMonitors;

@property (assign) CGDirectDisplayID window_display;

+(void)toggleMonitor:(CGDirectDisplayID) displayID enabled:(Boolean) enabled;
+(bool)isDisplayEnabled:(CGDirectDisplayID)displayID;
@end
