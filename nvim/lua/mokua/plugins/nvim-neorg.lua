return {
	"nvim-neorg/neorg",
	build = ":Neorg sync-parsers",
	dependencies = { "nvim-lua/plenary.nvim" },
	config = function()
		require("neorg").setup({
			load = {
				["core.defaults"] = {}, -- Loads default behaviour
				["core.concealer"] = {}, -- Adds pretty icons to your documents
				["core.summary"] = {}, -- Creates links to all files in any workspaces
				["core.export"] = {}, -- Exports Neorg documents into any language
				["core.export.markdown"] = {},
				["core.autocommands"] = {},
				["core.dirman"] = { -- Manages Neorg workspaces
					config = {
						workspaces = {
							notes = "~/notes",
							SysAdmin = "~/Sec/",
						},
						default_workspace = "SysAdmin",
					},
				},
			},
		})
	end,
}
