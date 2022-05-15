//
//  PlayingCard.h
//  Matchismo
//
//  Created by Young Ju on 5/14/22.
//

#ifndef PlayingCard_h
#define PlayingCard_h
#import "Card.h"

@interface PlayingCard : Card

@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;

+ (NSArray *)validSuits;
+ (NSUInteger)maxRank;



@end


#endif /* PlayingCard_h */
