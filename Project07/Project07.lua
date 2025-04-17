project "Project07"
    kind "ConsoleApp"
    language "C++"
    cppdialect "C++20"

    files
    {
        "src/**.cpp"
    }

    includedirs
    {
    }

    defines
	{
	}

    vectorextensions  "SSE"               -- Necessary to run x32.

    buildoptions { "/EHsc", "/Zc:preprocessor", "/Zc:__cplusplus"}

    location (LocationDir)
    targetdir (EXEDir)
    objdir (ObjectDir)

    filter "system:windows" 
        systemversion "latest"
        defines { "_WINDOWS","WINDOWS" }

    filter "configurations:Debug"
        runtime "Debug"
        symbols "On"
        defines { "_DEBUG" }

    filter "configurations:Release"
        runtime "Release"
        optimize "On"
        symbols "On"
        defines { "_RELEASE","NDEBUG" }
        flags
        {
            "NoRuntimeChecks", -- Only used on Visual Studio.
            "NoBufferSecurityCheck"
        }

    filter "configurations:Dist"
        runtime "Release"
        optimize "On"
        symbols "Off"
        defines { "_DIST","NDEBUG" }
        flags
        {
            "NoRuntimeChecks", -- Only used on Visual Studio.
            "NoBufferSecurityCheck"
        }