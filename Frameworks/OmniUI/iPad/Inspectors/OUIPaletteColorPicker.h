// Copyright 2010 The Omni Group.  All rights reserved.
//
// This software may only be used and reproduced according to the
// terms in the file OmniSourceLicense.html, which should be
// distributed with this project and can also be found at
// <http://www.omnigroup.com/developer/sourcecode/sourcelicense/>.
//
// $Id$

#import <OmniUI/OUIColorPicker.h>

@interface OUIPaletteColorPicker : OUIColorPicker
{
@private
    NSArray *_themes;
    NSArray *_themeViews;
}

@property(copy,nonatomic) NSArray *themes;

@end
