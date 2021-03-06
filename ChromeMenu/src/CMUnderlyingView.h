//
//  ChromMenuUnderlyingView.h
//  ChromeMenu
//
//  Created by Maksym on 7/3/13.
//  Copyright (c) 2013 Maksym Stefanchuk. All rights reserved.
//

@protocol CMUnderlyingView <NSObject>

/**
 * @abstract Designated initializer
 * @param radius Array of four radiuses for bottom left, top left, top right and bottom right radiuses.
 */
- (id)initWithFrame:(NSRect)frameRect borderRadiuses:(NSArray *)radiuses;

- (void)setBorderRadiuses:(NSArray *)radiuses;

@end




@interface CMUnderlyingView : NSView <CMUnderlyingView>

@end



@interface CMUnderlyingViewVibrant : NSVisualEffectView <CMUnderlyingView>

@end
