/* This file was generated by the ServiceGenerator.
 * The ServiceGenerator is Copyright (c) 2012 Google Inc.
 */

//
//  GTLQueryTictactoe.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   tictactoe/v1
// Classes:
//   GTLQueryTictactoe (3 custom class methods, 3 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLQuery.h"
#else
  #import "GTLQuery.h"
#endif

@class GTLTictactoeBoard;
@class GTLTictactoeScore;

@interface GTLQueryTictactoe : GTLQuery

//
// Parameters valid on all methods.
//

// Selector specifying which fields to include in a partial response.
@property (copy) NSString *fields;

//
// Method-specific parameters; see the comments below for more information.
//
@property (copy) NSString *limit;
@property (copy) NSString *order;

#pragma mark -
#pragma mark "board" methods
// These create a GTLQueryTictactoe object.

// Method: tictactoe.board.getmove
// Fetches a GTLTictactoeBoard.
+ (id)queryForBoardGetmoveWithObject:(GTLTictactoeBoard *)object;

#pragma mark -
#pragma mark "scores" methods
// These create a GTLQueryTictactoe object.

// Method: tictactoe.scores.insert
// Fetches a GTLTictactoeScore.
+ (id)queryForScoresInsertWithObject:(GTLTictactoeScore *)object;

// Method: tictactoe.scores.list
//  Optional:
//   limit: NSString
//   order: NSString
// Fetches a GTLTictactoeScores.
+ (id)queryForScoresList;

@end
