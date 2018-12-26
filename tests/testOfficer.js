"use strict";
/* global it,describe */
var officer = require("..");
var assert = require("assert");

describe("Boost Based Addon", function() {
    it("should return Fibonacci sequence", function() {
        var result = officer.fibo();
        assert.equal(result, "Hi");
    });
});