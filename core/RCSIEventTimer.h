//
//  RCSIEventTimer.h
//  RCSIphone
//
//  Created by kiodo on 01/03/12.
//  Copyright 2012 HT srl. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RCSIEvent.h"

@interface _i_EventTimer : _i_Event
{
  int timerType;
}

@property (readwrite) int timerType;

- (id)init;

@end
