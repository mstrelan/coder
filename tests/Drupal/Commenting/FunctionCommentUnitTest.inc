<?php

/**
 * @file
 * Some function comment tests.
 */

/**
 * Test.
 *
 * @param string $x
 *   Comment does not end with full stop
 * @param string $y
 *   comment does not start with a capital letter.
 */
function foo($x, $y) {

}

/**
 * Missing exception description in the throws tag, which is OK.
 *
 * @throws \Drupal\locale\StringStorageException
 */
function test1() {

}

/**
 * Wrong indentation of description for the throws tag.
 *
 * @throws \Drupal\locale\StringStorageException
 *  Description here.
 */
function test2() {

}

/**
 * Description for the throws tag does not start with capital letter.
 *
 * @throws \Drupal\locale\StringStorageException
 *   description here.
 */
function test3() {

}

/**
 * Description for the throws tag does not end with a dot.
 *
 * @throws \Drupal\locale\StringStorageException
 *   Description here
 */
function test4() {

}

/**
 * Description for the throws tag must be on the next line.
 *
 * @throws \Drupal\locale\StringStorageException Description here.
 */
function test5() {

}

/**
 * Some description.
 *
 * @param string $foo
 *   Some parameter that does not exist.
 */
function test6() {

}

function test7() {
  // Missing function doc here.
}

/**
 * Test methods.
 */
class Test {

  public function undocumented() {

  }

  // This should be a doc comment.
  public function wrong() {

  }

}

/**
 * Some comment.
 *
 * @param int $x Description should be on the next line.
 */
function test8($x) {

}

/**
 * Default implementation of a menu item (without a page or form controller).
 *
 * UML:
 * @link http://drupal7demo.webel.com.au/node/1017 DefaultMenuItem @endlink.
 *
 * @param integer $foo
 *   Test.
 */
function test9($foo) {

}

/**
 * Default implementation of a menu item (without a page or form controller).
 *
 * UML:
 * @link http://drupal7demo.webel.com.au/node/1017 DefaultMenuItem @endlink.
 *
 * @param integer $foo Test.
 */
function test10($foo) {

}

/**
 * A function may throw multiple exceptions.
 *
 * @throws \Exception
 *   Thrown when something bad happens.
 * @throws \InvalidArgumentException
 *   Thrown when an argument is invalid.
 */
function test11() {

}

/**
 * Update or set users expiration time
 *
 * @param object $user
 * @param int $timespan (seconds)
 */
function test12($user, $timespan) {

}

/**
 * Update or set users expiration time.
 *
 * @param object $user
 *   Object type hint in comment without real type hint is allowed.
 */
function test13($user) {

}

/**
 * Update or set users expiration time.
 *
 * @param object $user
 *   Object stdClass type hint is allowed for object.
 */
function test14(stdClass $user) {

}

/**
 * Array parameter type mismatch.
 *
 * @param array $foo
 *   Comment here.
 */
function test15(Test $foo) {

}

/*
 * This should be converted into a doc comment.
 */
function test16() {

}

/**
 * Return comment indentation should be three spaces.
 *
 * @return string
 * This is not indented correctly.
 */
function test17() {
  return '1';
}

/**
 * Return comment indentation should be three spaces.
 *
 * @return string
 *This is not indented correctly.
 */
function test18() {
  return '1';
}

/**
 * Return comment indentation should be three spaces.
 *
 * @return string
 * This is not indented correctly. Continues on the next line because this is a
 * really long sentence.
 */
function test19() {
  return '1';
}

/**
 * Multiple errors in @param line.
 *
 * @param   string    $arg1 This should be in next line and needs period
 */
function test20($arg1) {
}

/**
 * Testing fix of incorrect param types.
 *
 * @param Array $arg1
 *   The parameter type is not valid.
 * @param integer|bool $arg2
 *   One of the parameter types listed is not valid.
 * @param integer|boolean|Array $arg3
 *   All of the parameter types listed are not valid.
 */
function test21($arg1, $arg2, $arg3) {
}

/**
 * Test for allowed param var types.
 *
 * @param array|bool|float|int|mixed|object|string|resource|callable $arg1
 *   All of the above types are valid.
 * @param Array|boolean|integer|str|stdClass|NULL $arg2
 *   All of the above types are invalid.
 * @param array()|Boolean|number|String $arg3
 *   All of the above types are invalid.
 * @param type $arg4
 *   All of the above types are invalid.
 * @param FALSE|TRUE|Int $arg5
 *   All of the above types are invalid.
 * @param Bool|Integer $arg6
 *   All of the above types are invalid.
 */
function test22($arg1, $arg2, $arg3, $arg4, $arg5, $arg6) {
}

/**
 * Void returns allowed when null is given in @return.
 *
 * When null is a potential return value it should be allowed to have return
 * statements with void return as well.
 *
 * @return bool|null
 *   This implies that the return value can be NULL, a boolean, or empty.
 */
function test23() {
  if (1 == 2) {
    return;
  }
  return TRUE;
}

/**
 * Even when null is given in @return there must be at least 1 valid return.
 *
 * When null is a potential return value it should be allowed to have return
 * statements with void return. This does not mean that all returns can be void.
 * There must be at least one non-void return.
 *
 * @return bool|null
 *   This implies that the return value can be NULL, a boolean, or empty.
 */
function test24() {
  if (1 == 2) {
    return;
  }
  return;
}

/**
 * The shorthand array syntax should not be used as a return type.
 *
 * @return []
 *   The array.
 */
function test25() {
  return [];
}

/**
 * Type declarations should not have any illegal characters.
 *
 * @param \Ille*al $var
 *   This asterisk does not belong here.
 *
 * @return \Some/Namespace
 *   This should not have a forward slash.
 */
function test26($var) {
  return '';
}

/**
 * Data types with spaces.
 *
 * @param string or int $x
 *   Data types should not contain spaces.
 *
 * @return int or bool
 *   Same spaces in data type here.
 */
function test27($x) {
  return 0;
}

/**
 * Return docs should not contain variable names.
 *
 * @return string $profile
 *   The profile.
 */
function test28() {
  $profile = 'x';
  return $profile;
}

/**
 * Not fixable return comment.
 *
 * @return string $profile more confusing text here.
 *   The profile.
 */
function test29() {
  $profile = 'x';
  return $profile;
}

/**
 * Indentation of param comment is wrong.
 *
 * @param string $xml_response
 *    String returned from CreateClientProfile.
 *
 * @return mixed
 *    Return fetched bookings or log error.
 */
function test30($xml_response) {

}

/**
 * Class Test.
 */
class Test2 extends AbstractTest {

  /**
   * Run method with missing described variable.
   *
   * @param \stdClass $start
   *   Start point.
   *
   * @return bool
   *   Result.
   */
  public function run(\stdClass $start, \stdClass $stop) {
    return TRUE;
  }

}

/**
 * Comment of param is just one word, which means it is the data type.
 *
 * @param $a array
 * @param $b array
 */
function test31($a, $b) {

}

class PostcodeAnywhere_Interactive_Find {

   private $UserName; //The username associated with the Royal Mail license (not required for click licenses).
   private $Data; //Holds the results of the query

   function PostcodeAnywhere_Interactive_Find($Key, $SearchTerm, $PreferredLanguage, $Filter, $UserName)
   {
      $this->Key = $Key;
      $this->SearchTerm = $SearchTerm;
      $this->PreferredLanguage = $PreferredLanguage;
      $this->Filter = $Filter;
      $this->UserName = $UserName;
   }
}

/**
 * There should be no dots.
 *
 * @param string $a.
 *   Some comment.
 * @param string $b.
 *   Another comment.
 */
function test32($a, $b) {

}

/**
 * There should be no dots and comments should be on the next line.
 *
 * @param string $a. Some comment.
 * @param string $b. Another comment.
 */
function test33($a, $b) {

}

/**
 * Yield should be a recognised return statement.
 *
 * @return int
 *   Integer value.
 */
function test34($a, $b) {
  for ($i = 1; $i <= 3; $i++) {
    yield $i;
  }
}

/**
 * Using \stdClass as type hint is ok, but not in the documentation.
 *
 * @param object $name
 *   Some description.
 * @param \stdClass $param2
 *   Some description.
 */
function test35(\stdClass $name, \stdClass $param2) {

}

/**
 * Allow "object" as real type hint (PHP 7.2).
 *
 * @param \stdClass $arg
 *   Something here.
 * @param object $blarg
 *   Another thing.
 */
function test36(object $arg, object $blarg) {
  return $arg;
}

/**
 * A class with a method that has the same name as the class.
 */
class Small {

  /**
   * Our small constructor.
   */
  public function __construct() {
  }

  /**
   * Return tag should be allowed here.
   *
   * @return string
   *   Something small.
   */
  public function small() {
    return 'string';
  }

}

/**
 * Some short comment.
 *
 * @param array $matches
 *   An array of matches by a preg_replace_callback() call that scans for
 *   @import-ed CSS files, except for external CSS files.
 * @param array $sub_key
 *   An array containing the sub-keys specifying the library asset, e.g.
 *   @code['js']@endcode or @code['css', 'component']@endcode
 * @param string $to
 *   The email address or addresses where the message will be sent to. The
 *   formatting of this string will be validated with the
 *   @link http://php.net/manual/filter.filters.validate.php PHP email @endlink.
 */
function test37(array $matches, array $sub_key, $to) {

}

/**
 * Yield from should be a recognised return statement.
 *
 * @return Generator
 *   Generator value.
 */
function test38($a, $b) {
  yield from [$a, $b];
}

/**
 * Allow "mixed" as real type hint (PHP 8.0).
 *
 * @param mixed $arg
 *   Something here.
 */
function test39(mixed $arg) {
  return $arg;
}

/**
 * Test multiline comments with excess spaces in the param annotation.
 */
class Test40 {

    /**
     * Test method.
     *
     * @param string      $errorMessage
     *   It only breaks when this comment spans multiple lines but won't break if
     * you put it on a single line.
     */
    public function test41(string $errorMessage) {

    }

}
