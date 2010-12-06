# -*- ruby -*-

require 'rubygems'
require 'hoe'

gem 'rake-compiler', '>= 0.4.1'
require "rake/extensiontask"

Hoe.plugin :debugging, :doofus, :git

Hoe.spec 'omg' do
  developer('Aaron Patterson', 'aaron@tenderlovemaking.com')
  self.readme_file   = 'README.rdoc'
  self.history_file  = 'CHANGELOG.rdoc'
  self.extra_rdoc_files  = FileList['*.rdoc']

  Rake::ExtensionTask.new "omg", spec do |ext|
    ext.lib_dir = File.join(*['lib', 'omg', ENV['FAT_DIR']].compact)
  end
end

# vim: syntax=ruby
