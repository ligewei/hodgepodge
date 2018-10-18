#!/usr/bin/perl
# By regli
# Encode or Decode String
# Supported List
# 1. url
# 2. base64
#
use strict;
use warnings;
use URI::Escape;
use MIME::Base64;

if (@ARGV != 3)
{
    die "Usage: $0 type[url/base64/..] action[en/de] str";
}

my $op_type = $ARGV[0];
my $op_action = $ARGV[1];
my $orignal_str = $ARGV[2];
my $translated_str = "";

if ($op_type eq 'url')
{
    if ($op_action eq 'en')
    {
        $translated_str = uri_escape($orignal_str);
    }
    else
    {
        $translated_str = uri_unescape($orignal_str);
    }
}
elsif ($op_type eq 'base64')
{
    if ($op_action eq 'en')
    {
        $translated_str = encode_base64($orignal_str);
    }
    else
    {
        $translated_str = decode_base64($orignal_str);
    }
}
else
{
    die "Not Supported Type: ".$op_type;
}

print "Orignal String: ".$orignal_str."\n";
print "Translated Str: ".$translated_str."\n";

