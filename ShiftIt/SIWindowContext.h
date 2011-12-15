/*
 ShiftIt: Window Organizer for OSX
 Copyright (c) 2010-2011 Filip Krikava

 This program is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>.

 */

#import "SIWindow.h"

@protocol SIWindowContext <NSObject>

@required
- (BOOL) getFocusedWindow:(id<SIWindow> *)window error:(NSError **)error;
- (BOOL) anchorWindow:(id<SIWindow>)window error:(NSError **)error;
- (void) getAnchorMargins:(int *)leftMargin topMargin:(int *)topMargin bottomMargin:(int *)bottomMargin rightMargin:(int *)rightMargin;
@end