include "Directory.lua"

workspace "RestArtProjectA"
	architecture "x64"
	startproject "Project01"
	configurations
	{
		"Debug",
		"Release",
        "Dist"
	}

    filter "system:windows"
    buildoptions { "/EHsc", "/Zc:preprocessor", "/Zc:__cplusplus", "/utf-8" }

group "Project"
	include "Project01/Project01.lua"
	include "Project02/Project02.lua"
	include "Project03/Project03.lua"
	include "Project07/Project07.lua"
	include "Project09/Project09.lua"
	include "Project10/Project10.lua"
	include "Project12/Project12.lua"
